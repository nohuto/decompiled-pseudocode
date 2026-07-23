/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8
 * Callers:
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     PspUnlockThreadSecurityShared @ 0x14040AFC0 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x140414FB0 (PspLockThreadSecurityShared.c)
 *     PsGetThreadTeb @ 0x14044C5E0 (PsGetThreadTeb.c)
 *     RtlCopyFromUser @ 0x1404F96D8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1406FA008 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x1406FA06C (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1406FA0A8 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1406FA0E4 (RtlWriteULongToUser.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409E0A10 (RtlWow64GetCpuAreaInfo.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E0BB8 (RtlWow64GetCpuAreaEnabledFeatures.c)
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
  size_t v16; // r8
  unsigned __int64 v17; // r9
  char *v18; // rbx
  char *v19; // rdi
  int v20; // eax
  size_t v21; // rdx
  char *v22; // rcx
  char *v23; // rcx
  unsigned __int64 v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // rbx
  char *v27; // rcx
  char *v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  signed int CpuAreaInfo; // [rsp+20h] [rbp-E8h]
  int v33; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D8h]
  __int64 v35; // [rsp+38h] [rbp-D0h]
  void *Src[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+50h] [rbp-B8h]
  __int128 v38; // [rsp+70h] [rbp-98h] BYREF
  __int128 v39; // [rsp+80h] [rbp-88h]
  _BYTE v40[48]; // [rsp+90h] [rbp-78h] BYREF

  v35 = a2;
  memset(v40, 0, sizeof(v40));
  *(_OWORD *)Src = 0LL;
  v37 = 0LL;
  v11 = a4 + 179;
  v33 = *a4;
  PspLockThreadSecurityShared(a2, (__int64)KeGetCurrentThread());
  ThreadTeb = PsGetThreadTeb(a2);
  v34 = ThreadTeb;
  if ( !ThreadTeb )
  {
    PspUnlockThreadSecurityShared(a2);
    return 3221225547LL;
  }
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v40);
  ULong64FromUser = RtlReadULong64FromUser((volatile void *)(ThreadTeb + 5256));
  if ( ULong64FromUser )
  {
    CpuAreaInfo = RtlWow64GetCpuAreaInfo(ULong64FromUser, v15, (__int64)Src);
    if ( CpuAreaInfo < 0 )
      goto LABEL_36;
    v18 = (char *)Src[0];
    v19 = (char *)Src[0] + 716;
    if ( a3 )
    {
      RtlCopyFromUser(a4, Src[0], 0x2CCuLL);
      v20 = v33;
      *a4 = v33;
      if ( (v20 & 0x10040) != 0x10040 )
        goto LABEL_18;
      v38 = 0LL;
      v39 = 0LL;
      RtlCopyFromUser(&v38, v19, 0x20uLL);
      v21 = (unsigned int)v11[5];
      if ( (_DWORD)v21 == DWORD1(v39) )
      {
        v22 = &v19[(int)v39];
        v17 = -1LL;
        if ( v22 >= v19 )
          v17 = (unsigned __int64)&v19[(int)v39];
        CpuAreaInfo = v22 < v19 ? 0xC0000095 : 0;
        if ( v22 < v19 )
          goto LABEL_36;
        v23 = &v18[a5];
        v24 = v17 + DWORD1(v39);
        if ( v23 > v18 && v24 > v17 && v17 >= (unsigned __int64)v18 && v24 <= (unsigned __int64)v23 )
        {
          v25 = (_QWORD *)((char *)v11 + v11[4]);
          v26 = v25[1];
          RtlCopyFromUser(v25, (void *)v17, v21);
          *v25 &= RtlWow64GetCpuAreaEnabledFeatures(&v33);
          v25[1] = v26;
          *((_OWORD *)v25 + 1) = 0LL;
          *((_OWORD *)v25 + 2) = 0LL;
          *((_OWORD *)v25 + 3) = 0LL;
LABEL_18:
          if ( a7 )
            *a7 = RtlReadULongFromUser(*((unsigned int **)&v37 + 1));
LABEL_32:
          if ( a8 )
          {
            v30 = RtlReadULong64FromUser((volatile void *)(v34 + 5328));
            if ( v30 )
              *a8 = (RtlReadULongFromUser((unsigned int *)(v30 + 4)) & 2) != 0;
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
    if ( (v33 & 0x10040) == 0x10040 )
    {
      v38 = 0LL;
      v39 = 0LL;
      RtlCopyFromUser(&v38, v19, 0x20uLL);
      v16 = (unsigned int)v11[5];
      if ( (_DWORD)v16 != DWORD1(v39) )
        goto LABEL_9;
      v27 = &v19[(int)v39];
      v17 = -1LL;
      if ( v27 >= v19 )
        v17 = (unsigned __int64)&v19[(int)v39];
      CpuAreaInfo = v27 < v19 ? 0xC0000095 : 0;
      if ( v27 < v19 )
        goto LABEL_36;
      v28 = &v18[a5];
      v29 = v17 + DWORD1(v39);
      if ( v28 <= v18 || v29 <= v17 || v17 < (unsigned __int64)v18 || v29 > (unsigned __int64)v28 )
        goto LABEL_9;
      RtlCopyToUser((void *)v17, (char *)v11 + v11[4], v16);
    }
    if ( a7 )
      RtlWriteULongToUser(*((_DWORD **)&v37 + 1), *a7);
    goto LABEL_32;
  }
  CpuAreaInfo = -1073741811;
LABEL_36:
  KiUnstackDetachProcess((__int64)v40, 0, v16, v17);
  PspUnlockThreadSecurityShared(a2);
  return (unsigned int)CpuAreaInfo;
}
