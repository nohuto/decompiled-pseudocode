/*
 * XREFs of NvmeRingSQDoorbellForBatchingSplitIo @ 0x140124210
 * Callers:
 *     NvmeSendSplitIo @ 0x140124340 (NvmeSendSplitIo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeRingSQDoorbellForBatchingSplitIo(__int64 a1, __int64 a2, int a3, __int16 a4, char a5)
{
  KIRQL v5; // bp
  char v6; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  int *v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v5 = 0;
  v6 = *(_BYTE *)(a1 + 1728);
  if ( !**(_DWORD **)(a1 + 1288) && a2 )
  {
    if ( a5 )
      v5 = KfRaiseIrql(2u);
    if ( *(_WORD *)(a2 + 142) == a4 )
    {
      while ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 132), 1, 0) )
      {
        if ( *(_WORD *)(a2 + 142) != a4 )
          goto LABEL_16;
      }
      while ( *(_DWORD *)(a2 + 128) )
        _InterlockedOr(v12, 0);
      if ( *(_WORD *)(a2 + 142) == a4 )
      {
        if ( v6 == 1 )
        {
          v10 = *(_QWORD *)(a1 + 128);
          v11 = *(_QWORD *)(a1 + 1648);
          v13 = &v14;
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(v10 + 528))(v11 + 64, *(unsigned int *)(a2 + 16), 4LL);
        }
        else
        {
          **(_DWORD **)(a2 + 16) = v14;
          _InterlockedOr(v12, 0);
        }
      }
      _InterlockedOr(v12, 0);
      _InterlockedExchange((volatile __int32 *)(a2 + 132), 0);
    }
LABEL_16:
    if ( a5 )
      KeLowerIrql(v5);
  }
}
