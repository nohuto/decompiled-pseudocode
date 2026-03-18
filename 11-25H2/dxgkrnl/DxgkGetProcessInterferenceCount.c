/*
 * XREFs of DxgkGetProcessInterferenceCount @ 0x1401D20A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkGetProcessInterferenceCount(__int64 a1, _DWORD *a2)
{
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v13);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  ProcessDxgProcess = PsGetProcessDxgProcess(a1);
  *a2 = 0;
  v5 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    if ( *(_DWORD *)(v5 + 40) == 1 )
    {
      v6 = 0;
      v7 = 34LL;
      do
      {
        DXGGLOBAL::GetGlobal();
        if ( DXGGLOBAL::m_pDxgmmsExport[v7 - 34] )
        {
          v14 = 0;
          Global = DXGGLOBAL::GetGlobal();
          v9 = *(_QWORD *)(v5 + 64);
          v10 = *(_QWORD *)((char *)Global + v7 * 8);
          if ( v9 )
          {
            v11 = *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)v10 - 1) + 16);
            if ( v11 )
              (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v10 + 8) + 904LL))(v11, &v14);
          }
          *a2 += v14;
        }
        ++v6;
        ++v7;
      }
      while ( v6 < 2 );
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
}
