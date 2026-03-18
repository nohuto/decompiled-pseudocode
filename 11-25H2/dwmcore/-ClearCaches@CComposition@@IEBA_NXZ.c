/*
 * XREFs of ?ClearCaches@CComposition@@IEBA_NXZ @ 0x1801CDED0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?ClearProtectedResources@CD3DDevice@@QEAA_NXZ @ 0x1802572EC (-ClearProtectedResources@CD3DDevice@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::ClearCaches(CComposition *this, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // si
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  int v6; // r9d
  unsigned __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  __int64 v10; // r15
  __int64 i; // rdi
  char v12; // bp
  __int64 v13; // rbx
  __int64 j; // rcx
  CD3DDevice *v15; // rcx
  __int64 v16; // r8
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+50h] [rbp-28h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    LODWORD(v18) = 2000;
    v20 = &v18;
    v21 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start,
      a3,
      2u,
      &v19);
  }
  v3 = 1;
  v4 = *((_QWORD *)g_pComposition + 77);
  v5 = *(_QWORD *)(v4 + 712);
  v6 = *(_DWORD *)(v4 + 720);
  v7 = HIDWORD(v5);
  if ( !(_DWORD)v5 || !HIDWORD(v5) )
  {
    v18 = 0x43800000780LL;
    v6 = 4;
    LODWORD(v5) = 1920;
    LODWORD(v7) = 1080;
  }
  v8 = v6 * ((v5 + 255) & 0xFFFFFF00) * ((v7 + 255) & 0xFFFFFF00);
  v9 = v8 + (v8 >> 2);
  EnterCriticalSection(&CriticalSection);
  v10 = xmmword_180406B40;
  for ( i = qword_180406B38; i != v10; i += 16LL )
  {
    v12 = 0;
    v13 = *(_QWORD *)(*(_QWORD *)i + 936LL);
    v18 = v13;
    EnterCriticalSection(&CriticalSection);
    for ( j = qword_180406B38; j != (_QWORD)xmmword_180406B40; j += 16LL )
    {
      if ( __PAIR64__(HIDWORD(v18), v13) == *(_QWORD *)(*(_QWORD *)j + 936LL) )
      {
        if ( !*(_BYTE *)(*(_QWORD *)j + 452LL) && !byte_180406B50 && *(_DWORD *)(*(_QWORD *)j + 448LL) )
          v12 = 1;
        break;
      }
    }
    LeaveCriticalSection(&CriticalSection);
    if ( *(_BYTE *)(i + 8) && !v12 )
      CD3DDevice::ClearProtectedResources(*(CD3DDevice **)i);
    v15 = *(CD3DDevice **)i;
    LODWORD(v18) = 1;
    if ( *((_QWORD *)v15 + 25) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)v15 + 26) + 40LL))(
        *((_QWORD *)v15 + 26),
        2000LL,
        v9,
        &v18);
      if ( (_DWORD)v18 != 1 )
        v3 = 0;
    }
    *(_BYTE *)(i + 8) = v12;
  }
  LeaveCriticalSection(&CriticalSection);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v21 = 4LL;
    v20 = &v18;
    LODWORD(v18) = v3 != 0;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop,
      v16,
      2u,
      &v19);
  }
  return v3;
}
