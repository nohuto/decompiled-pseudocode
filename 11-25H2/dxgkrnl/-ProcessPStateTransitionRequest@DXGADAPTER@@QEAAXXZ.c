/*
 * XREFs of ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x140066484
 * Callers:
 *     ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1401A8EE0 (-DxgkpProcessPowerPStateWork@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140016724 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     ?DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z @ 0x1401A5F3C (-DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z.c)
 */

void __fastcall DXGADAPTER::ProcessPStateTransitionRequest(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v3 = 0;
  _InterlockedExchange((volatile __int32 *)this + 1159, 0);
  if ( *((_DWORD *)this + 1108) )
  {
    do
    {
      v5 = 248LL * v3;
      v6 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 553) + v5 + 244), -1);
      if ( v6 != -1 )
      {
        v7 = *((_QWORD *)this + 553);
        v8 = *(unsigned int *)(v7 + v5 + 144);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        {
          LODWORD(v11) = v6;
          LODWORD(v10) = *(_DWORD *)(v7 + v5 + 192);
          LODWORD(v9) = *(_DWORD *)(v7 + v5 + 144);
          McTemplateK0pqtq_EtwWriteTransfer(v5, &Dxgk_SetPowerPState, a3, this, v9, v10, v11);
        }
        if ( (int)DXGADAPTER::DdiSetPowerPState(this, v8, v6) < 0 )
        {
          WdLogSingleEntry2(3LL, v8, v6);
          WdLogGlobalForLineNumber = 2992;
        }
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 1108) );
  }
}
