/*
 * XREFs of ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1402011F0
 * Callers:
 *     NtDxgkVailConnect @ 0x140203500 (NtDxgkVailConnect.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x140200970 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x140200E18 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailGuestConnect(DXGSESSIONDATA *this)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  __int64 v4; // rax
  DXGVAILGUESTOBJECT *v5; // rdi
  __int64 v6; // rdx
  const struct _GUID *v7; // r8
  int v8; // eax
  DXGVAILGUESTOBJECT *v9; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONDATA *)((char *)this + 18920), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( *((_QWORD *)this + 2372) )
  {
    ++*((_DWORD *)this + 4742);
  }
  else
  {
    v4 = operator new(0x60uLL, 0x4B677844u, 256LL, v3);
    v5 = (DXGVAILGUESTOBJECT *)v4;
    if ( v4 )
    {
      *(_QWORD *)v4 = this;
      *(_DWORD *)(v4 + 8) = 1;
      *(_QWORD *)(v4 + 24) = 0LL;
      *(_QWORD *)(v4 + 32) = 0LL;
      *(_DWORD *)(v4 + 48) = 0;
      *(_DWORD *)(v4 + 52) = -1;
      *(_QWORD *)(v4 + 40) = 0LL;
      *(_DWORD *)(v4 + 56) = 68;
      *(_QWORD *)(v4 + 72) = 0LL;
      *(_QWORD *)(v4 + 80) = 0LL;
      *(_QWORD *)(v4 + 88) = 0LL;
      ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v4 + 64));
      *((_QWORD *)this + 2372) = v5;
      v8 = DXGVAILGUESTOBJECT::Initialize(v5, v6, v7);
      v2 = v8;
      if ( v8 >= 0 )
      {
        *((_DWORD *)this + 4742) = 1;
      }
      else
      {
        WdLogSingleEntry1(3LL, v8);
        v9 = (DXGVAILGUESTOBJECT *)*((_QWORD *)this + 2372);
        WdLogGlobalForLineNumber = 2214;
        DXGVAILGUESTOBJECT::ReleaseReference(v9);
        *((_QWORD *)this + 2372) = 0LL;
      }
    }
    else
    {
      *((_QWORD *)this + 2372) = 0LL;
      v2 = -1073741801;
      WdLogSingleEntry1(3LL, -1073741801LL);
      WdLogGlobalForLineNumber = 2228;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  return v2;
}
