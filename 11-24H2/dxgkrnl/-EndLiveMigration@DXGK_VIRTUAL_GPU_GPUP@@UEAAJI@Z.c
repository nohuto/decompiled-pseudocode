/*
 * XREFs of ?EndLiveMigration@DXGK_VIRTUAL_GPU_GPUP@@UEAAJI@Z @ 0x1403D60A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroyLiveMigrationState@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ @ 0x14018A80C (-DestroyLiveMigrationState@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ.c)
 *     ?DdiStopDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1401A99DC (-DdiStopDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?DdiEndLiveMigration@ADAPTER_RENDER@@QEAAJI@Z @ 0x1403D6224 (-DdiEndLiveMigration@ADAPTER_RENDER@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::EndLiveMigration(DXGK_VIRTUAL_GPU_GPUP *this, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 v5; // r8
  int v6; // eax
  __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx

  v4 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( *((_DWORD *)this + 42) )
  {
    v9 = *(_DWORD *)(v5 + 5088) & 2;
    do
    {
      if ( !v9 )
      {
        v10 = *((_QWORD *)this + 23);
        v11 = 112LL * v4;
        if ( *(_DWORD *)(v10 + v11 + 104) )
        {
          if ( *(_DWORD *)(v10 + v11 + 88) )
          {
            v12 = ADAPTER_RENDER::DdiStopDirtyTracking(
                    *((ADAPTER_RENDER **)this + 1),
                    *(void *const *)(v10 + v11 + 96),
                    v5);
            *(_DWORD *)(*((_QWORD *)this + 23) + v11 + 88) = 0;
            if ( v12 < 0 )
            {
              v13 = v12;
              WdLogSingleEntry1(2LL, v12);
              WdLogGlobalForLineNumber = 1014;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"DxgkDdiStopDirtyTracking failed. Status: 0x%I64x",
                v13,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
        }
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 42) );
  }
  if ( *((_BYTE *)this + 334) )
  {
    v6 = ADAPTER_RENDER::DdiEndLiveMigration(*((ADAPTER_RENDER **)this + 1), a2);
    if ( v6 < 0 )
    {
      v8 = v6;
      WdLogSingleEntry1(2LL, v6);
      WdLogGlobalForLineNumber = 1025;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DdiEndLiveMigration failed. Status: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_BYTE *)this + 334) = 0;
  }
  DXGK_VIRTUAL_GPU_GPUP::DestroyLiveMigrationState(this);
  return 0LL;
}
