/*
 * XREFs of ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x140032D30
 * Callers:
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x140098AB4 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAV.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetSurfaceUpdate(
        CompositionSurfaceObject *this,
        __int64 a2,
        struct CSM_SURFACE_UPDATE_ *a3)
{
  int v6; // esi
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  HANDLE CurrentThreadId; // rax
  char *v10; // rcx
  _QWORD *v12; // r15
  __int64 v13; // rax
  char v14; // al
  _DWORD *v15; // r15
  __int64 v16; // r13
  int v17; // eax
  __int128 v18; // xmm0
  int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
  v6 = -1073741823;
  if ( (*((_QWORD *)this + 11) != a2 || !a2) && *((int *)this + 16) > 0 )
  {
    v7 = 0LL;
    if ( !*((_DWORD *)this + 34) )
      goto LABEL_5;
    v8 = (_QWORD *)*((_QWORD *)this + 16);
    if ( v8 == (_QWORD *)((char *)this + 120) )
      goto LABEL_5;
    do
    {
      v12 = v8 - 3;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*(v8 - 3) + 24LL))(v8 - 3) )
        break;
      v8 = (_QWORD *)v8[1];
      v7 = v12;
    }
    while ( v8 != (_QWORD *)((char *)this + 120) );
    if ( !v7 )
    {
LABEL_5:
      memset((char *)a3 + 4, 0, 0x174uLL);
      *(_DWORD *)a3 = 2;
      v6 = 0;
      *(_QWORD *)((char *)a3 + 4) = *((_QWORD *)this + 3);
LABEL_6:
      *((_QWORD *)this + 11) = a2;
      goto LABEL_7;
    }
    v13 = *v7;
    v20 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v13 + 232))(v7, &v20);
    if ( v6 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 168LL))(v7);
      v19 = 0;
      v15 = (_DWORD *)((char *)a3 + 192);
      *(_DWORD *)a3 = 3 - (v14 != 0);
      *(_QWORD *)((char *)a3 + 4) = *((_QWORD *)this + 3);
      *((_QWORD *)a3 + 2) = v7[2];
      *((_DWORD *)a3 + 6) = *(_DWORD *)(v20 + 28);
      *((_DWORD *)a3 + 7) = *((_DWORD *)v7 + 73);
      v16 = v7[37];
      *((_DWORD *)a3 + 48) = 10;
      v17 = (*(__int64 (__fastcall **)(__int64, char *, char *, int *))(*(_QWORD *)v16 + 56LL))(
              v16,
              (char *)a3 + 192,
              (char *)a3 + 32,
              &v19);
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          *v15 = -1;
        }
        else if ( v17 == -1073741789 && v19 == 2 )
        {
          (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 64LL))(v16, (char *)a3 + 32);
          *v15 = 1;
        }
      }
      else
      {
        *v15 = 0;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      *(_OWORD *)((char *)a3 + 196) = *((_OWORD *)v7 + 19);
      *(_QWORD *)((char *)a3 + 212) = v7[40];
      *((_DWORD *)a3 + 55) = *((_DWORD *)v7 + 82);
      v18 = *((_OWORD *)v7 + 3);
      *((_DWORD *)v7 + 76) = 0;
      *((_BYTE *)v7 + 43) = 0;
      *((_OWORD *)a3 + 14) = v18;
      *((_OWORD *)a3 + 15) = *((_OWORD *)v7 + 4);
      *((_OWORD *)a3 + 16) = *((_OWORD *)v7 + 5);
      *((_OWORD *)a3 + 17) = *((_OWORD *)v7 + 6);
      *((_OWORD *)a3 + 18) = *((_OWORD *)v7 + 7);
      *((_OWORD *)a3 + 19) = *((_OWORD *)v7 + 8);
      *((_OWORD *)a3 + 20) = *((_OWORD *)v7 + 9);
      *((_OWORD *)a3 + 21) = *((_OWORD *)v7 + 10);
      *((_OWORD *)a3 + 22) = *((_OWORD *)v7 + 11);
      *((_DWORD *)a3 + 92) = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 192LL))(v7);
      *((_DWORD *)a3 + 93) = *(_DWORD *)(v20 + 80);
      goto LABEL_6;
    }
  }
LABEL_7:
  CurrentThreadId = PsGetCurrentThreadId();
  v10 = (char *)this + 48;
  if ( CurrentThreadId == *((HANDLE *)this + 7) )
  {
    *((_QWORD *)this + 7) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v10, 0LL);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
