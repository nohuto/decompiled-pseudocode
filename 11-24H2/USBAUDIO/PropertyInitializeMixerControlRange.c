/*
 * XREFs of PropertyInitializeMixerControlRange @ 0x14002E080
 * Callers:
 *     TopologyProcessMixerUnit @ 0x140040D70 (TopologyProcessMixerUnit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PropertyInitializeMixerControlRange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  int v7; // esi
  unsigned int v8; // edi
  int v9; // r8d
  unsigned int v10; // esi
  unsigned int v11; // ebp
  int v13; // [rsp+68h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(a2 + 128);
  v7 = -(*(_BYTE *)(a3 + 1) != 0);
  v8 = 129;
  v9 = 0;
  v13 = 0;
  v10 = (v7 & 2) + 129;
  v11 = *(_DWORD *)(a3 + 4) + *(_DWORD *)(v5 + 4);
  do
  {
    if ( v9 < 0 )
      break;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, int, int *))(a2 + 136))(
           a1,
           a2,
           v8,
           v11,
           *(_DWORD *)(a3 + 8),
           1,
           &v13);
    if ( v9 >= 0 )
    {
      switch ( v8 )
      {
        case 0x81u:
          *(_DWORD *)(a3 + 12) = v13;
          break;
        case 0x82u:
          *(_DWORD *)(a3 + 24) = v13;
          break;
        case 0x83u:
          *(_DWORD *)(a3 + 28) = v13;
          break;
        case 0x84u:
          *(_DWORD *)(a3 + 16) = v13;
          break;
      }
    }
    ++v8;
  }
  while ( v8 <= v10 );
  return (unsigned int)v9;
}
