/*
 * XREFs of NtHWCursorUpdatePointer @ 0x140179790
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x1401CD2A4 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(ULONG64 a1, const void *a2)
{
  const void *v3; // rdx
  __int64 v4; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 result; // rax
  unsigned int v7; // r12d
  size_t v8; // rbx
  char *v9; // rax
  char *v10; // rsi
  const void *v11; // rdx
  ULONG64 v12; // r14
  char *v13; // r15
  int i; // edi
  const void *v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // ebx
  __int128 v20; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+40h] [rbp-B8h]
  int v22; // [rsp+50h] [rbp-A8h]
  int v23; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+5Ch] [rbp-9Ch]
  unsigned int v25; // [rsp+64h] [rbp-94h]
  int v26; // [rsp+68h] [rbp-90h]
  int v27; // [rsp+6Ch] [rbp-8Ch]
  char *v28; // [rsp+70h] [rbp-88h]
  __int64 v29; // [rsp+78h] [rbp-80h]
  ULONG64 v30; // [rsp+80h] [rbp-78h]
  char *v31; // [rsp+88h] [rbp-70h]
  PVOID Buffer; // [rsp+90h] [rbp-68h]
  __int128 v33; // [rsp+98h] [rbp-60h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-50h]
  __int64 v35; // [rsp+B0h] [rbp-48h] BYREF
  int v36; // [rsp+B8h] [rbp-40h]
  int v37; // [rsp+BCh] [rbp-3Ch]

  v3 = (const void *)a1;
  if ( !a1 )
    return 3221225485LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( a1 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v33, v3, 0x18uLL);
  v35 = *((_QWORD *)&v33 + 1);
  v36 = v34;
  v37 = BYTE4(v34) & 1;
  if ( !a2 )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4);
    result = (*(__int64 (__fastcall **)(__int128 *, __int64 *, _QWORD))(DxgkWin32kInterface + 640))(&v33, &v35, 0LL);
    if ( (int)result < 0 )
      return 3221225473LL;
    return result;
  }
  v20 = 0LL;
  v21 = 0LL;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v20, a2, 0x20uLL);
  if ( (unsigned int)(v20 - 1) > 1
    || !*((_QWORD *)&v21 + 1)
    || HIDWORD(v20) > 0x1000
    || DWORD1(v20) > HIDWORD(v20) >> 2
    || DWORD2(v20) > 0x400 )
  {
    return 3221225485LL;
  }
  v7 = 4 * DWORD1(v20);
  v8 = (unsigned int)(DWORD2(v20) * 4 * DWORD1(v20));
  v9 = (char *)PALLOCMEM(v8, 0x706D7447u);
  v10 = v9;
  Buffer = v9;
  if ( !v9 )
    return 3221225473LL;
  if ( v7 == HIDWORD(v20) )
  {
    v11 = (const void *)*((_QWORD *)&v21 + 1);
    if ( *((_QWORD *)&v21 + 1) >= MmUserProbeAddress )
      v11 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v9, v11, v8);
  }
  else
  {
    v12 = *((_QWORD *)&v21 + 1);
    v30 = *((_QWORD *)&v21 + 1);
    v13 = v9;
    v31 = v9;
    for ( i = DWORD2(v20); ; --i )
    {
      v22 = i;
      if ( !i )
        break;
      v15 = (const void *)v12;
      if ( v12 >= MmUserProbeAddress )
        v15 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v13, v15, v7);
      v12 += HIDWORD(v20);
      v30 = v12;
      v13 += v7;
      v31 = v13;
    }
  }
  v27 = 0;
  if ( (_DWORD)v20 == 1 )
  {
    v23 = 2;
  }
  else
  {
    v16 = 0;
    if ( (_DWORD)v20 == 2 )
      v16 = 4;
    v23 = v16;
  }
  v24 = *(_QWORD *)((char *)&v20 + 4);
  v25 = v7;
  v26 = DWORD2(v33);
  v28 = v10;
  if ( (unsigned int)Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline() )
    v29 = v21;
  else
    v29 = 0LL;
  v18 = DxDdGetDxgkWin32kInterface(v17);
  v19 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, int *, _QWORD))(v18 + 648))(&v33, &v35, &v23, 0LL);
  GreDeleteFastMutex(v10);
  if ( v19 < 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v19;
}
