/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x140AD198C
 * Callers:
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409A90C0 (PspWow64GetContextThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     PspUnlockThreadSecurityShared @ 0x14041AFC0 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x14041F270 (PspLockThreadSecurityShared.c)
 *     PsGetThreadTeb @ 0x140456DA0 (PsGetThreadTeb.c)
 *     RtlCopyFromUser @ 0x1404FBE18 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1406FC3C8 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x1406FC42C (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1406FC468 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1406FC4A4 (RtlWriteULongToUser.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409E6180 (RtlWow64GetCpuAreaInfo.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E6328 (RtlWow64GetCpuAreaEnabledFeatures.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuArea(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        int *a4,
        unsigned int a5,
        int a6,
        int *a7,
        bool *a8)
{
  int *v11; // r15
  __int64 ThreadTeb; // rdi
  __int64 ULong64FromUser; // rax
  __int64 v15; // rdx
  char *v16; // rbx
  char *v17; // rdi
  int v18; // eax
  size_t v19; // rdx
  char *v20; // rcx
  unsigned __int64 v21; // r9
  char *v22; // rcx
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rbx
  size_t v26; // r8
  char *v27; // rcx
  unsigned __int64 v28; // r9
  char *v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  signed int CpuAreaInfo; // [rsp+20h] [rbp-E8h]
  int v34; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D8h]
  __int64 v36; // [rsp+38h] [rbp-D0h]
  void *Src[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+50h] [rbp-B8h]
  __int128 v39; // [rsp+70h] [rbp-98h] BYREF
  __int128 v40; // [rsp+80h] [rbp-88h]
  _BYTE v41[48]; // [rsp+90h] [rbp-78h] BYREF

  v36 = a2;
  memset(v41, 0, sizeof(v41));
  *(_OWORD *)Src = 0LL;
  v38 = 0LL;
  v11 = a4 + 179;
  v34 = *a4;
  PspLockThreadSecurityShared(a2, (__int64)KeGetCurrentThread());
  ThreadTeb = PsGetThreadTeb(a2);
  v35 = ThreadTeb;
  if ( !ThreadTeb )
  {
    PspUnlockThreadSecurityShared(a2);
    return 3221225547LL;
  }
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v41);
  ULong64FromUser = RtlReadULong64FromUser((volatile void *)(ThreadTeb + 5256));
  if ( ULong64FromUser )
  {
    CpuAreaInfo = RtlWow64GetCpuAreaInfo(ULong64FromUser, v15, (__int64)Src);
    if ( CpuAreaInfo < 0 )
      goto LABEL_36;
    v16 = (char *)Src[0];
    v17 = (char *)Src[0] + 716;
    if ( a3 )
    {
      RtlCopyFromUser(a4, Src[0], 0x2CCuLL);
      v18 = v34;
      *a4 = v34;
      if ( (v18 & 0x10040) != 0x10040 )
        goto LABEL_18;
      v39 = 0LL;
      v40 = 0LL;
      RtlCopyFromUser(&v39, v17, 0x20uLL);
      v19 = (unsigned int)v11[5];
      if ( (_DWORD)v19 == DWORD1(v40) )
      {
        v20 = &v17[(int)v40];
        v21 = -1LL;
        if ( v20 >= v17 )
          v21 = (unsigned __int64)&v17[(int)v40];
        CpuAreaInfo = v20 < v17 ? 0xC0000095 : 0;
        if ( v20 < v17 )
          goto LABEL_36;
        v22 = &v16[a5];
        v23 = v21 + DWORD1(v40);
        if ( v22 > v16 && v23 > v21 && v21 >= (unsigned __int64)v16 && v23 <= (unsigned __int64)v22 )
        {
          v24 = (_QWORD *)((char *)v11 + v11[4]);
          v25 = v24[1];
          RtlCopyFromUser(v24, (void *)v21, v19);
          *v24 &= RtlWow64GetCpuAreaEnabledFeatures(&v34);
          v24[1] = v25;
          *((_OWORD *)v24 + 1) = 0LL;
          *((_OWORD *)v24 + 2) = 0LL;
          *((_OWORD *)v24 + 3) = 0LL;
LABEL_18:
          if ( a7 )
            *a7 = RtlReadULongFromUser(*((unsigned int **)&v38 + 1));
LABEL_32:
          if ( a8 )
          {
            v31 = RtlReadULong64FromUser((volatile void *)(v35 + 5328));
            if ( v31 )
              *a8 = (RtlReadULongFromUser((unsigned int *)(v31 + 4)) & 2) != 0;
            else
              *a8 = 0;
          }
          goto LABEL_36;
        }
      }
LABEL_9:
      CpuAreaInfo = -1073741819;
      goto LABEL_36;
    }
    RtlCopyToUser(Src[0], a4, 0x2CCuLL);
    if ( (v34 & 0x10040) == 0x10040 )
    {
      v39 = 0LL;
      v40 = 0LL;
      RtlCopyFromUser(&v39, v17, 0x20uLL);
      v26 = (unsigned int)v11[5];
      if ( (_DWORD)v26 != DWORD1(v40) )
        goto LABEL_9;
      v27 = &v17[(int)v40];
      v28 = -1LL;
      if ( v27 >= v17 )
        v28 = (unsigned __int64)&v17[(int)v40];
      CpuAreaInfo = v27 < v17 ? 0xC0000095 : 0;
      if ( v27 < v17 )
        goto LABEL_36;
      v29 = &v16[a5];
      v30 = v28 + DWORD1(v40);
      if ( v29 <= v16 || v30 <= v28 || v28 < (unsigned __int64)v16 || v30 > (unsigned __int64)v29 )
        goto LABEL_9;
      RtlCopyToUser((void *)v28, (char *)v11 + v11[4], v26);
    }
    if ( a7 )
      RtlWriteULongToUser(*((_DWORD **)&v38 + 1), *a7);
    goto LABEL_32;
  }
  CpuAreaInfo = -1073741811;
LABEL_36:
  KiUnstackDetachProcess((__int64)v41, 0);
  PspUnlockThreadSecurityShared(a2);
  return (unsigned int)CpuAreaInfo;
}
