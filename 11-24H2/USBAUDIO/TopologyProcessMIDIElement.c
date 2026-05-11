/*
 * XREFs of TopologyProcessMIDIElement @ 0x140031A70
 * Callers:
 *     TopologyBuildFilterTopology @ 0x140041B1C (TopologyBuildFilterTopology.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     TopologyMIDITimeCode @ 0x14002DD90 (TopologyMIDITimeCode.c)
 */

__int64 __fastcall TopologyProcessMIDIElement(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  _DWORD *v6; // r13
  unsigned int v7; // ebp
  unsigned int *v8; // rax
  int v10; // r15d
  __int64 v11; // r10
  int v12; // esi
  unsigned int v13; // edi
  char v14; // r12
  __int64 v15; // rbx
  int v16; // r9d
  int v17; // ecx
  __int64 v18; // r8
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  __int64 i; // rdx
  __int64 v23; // rcx
  int v24; // ebp
  __int64 result; // rax

  v6 = a6;
  v7 = 0;
  v8 = a5;
  v10 = *(_DWORD *)(a2 + 64);
  v11 = a1;
  v12 = *a6;
  v13 = *a5;
  v14 = 1;
  v15 = a4 + 16LL * *a6;
  v16 = 0;
  if ( v10 )
  {
    do
    {
      if ( v16 < 0 )
        break;
      v17 = v10 - (v10 & (v10 - 1));
      v10 &= v10 - 1;
      v18 = 168LL * v13;
      *(_DWORD *)(v18 + a3 + 80) = *(_DWORD *)(a2 + 16);
      switch ( v17 )
      {
        case 1:
          v19 = 26;
          break;
        case 2:
          v19 = 27;
          break;
        case 4:
          v19 = 28;
          break;
        case 8:
          v19 = 29;
          break;
        case 16:
          v19 = 30;
          break;
        case 32:
          v19 = 31;
          break;
        case 64:
          v19 = 32;
          break;
        case 128:
          v19 = 33;
          break;
        case 256:
          v19 = 34;
          break;
        case 512:
          v19 = 35;
          break;
        case 1024:
          v19 = 36;
          break;
        default:
          v19 = 0;
          if ( v17 == 2048 )
            v19 = 37;
          break;
      }
      *(_DWORD *)(v18 + a3 + 76) = v19;
      v20 = 4LL * v19;
      *(_QWORD *)(v18 + a3 + 8) = NodeDescriptorInfo[v20];
      *(_QWORD *)(v18 + a3 + 16) = (&off_14001E038)[v20];
      if ( v19 )
      {
        v21 = ((__int64 (__fastcall *)(__int64, __int64, __int64))MIDIElementProcessRtn[v19 - 26])(v11, a2, a3);
        v11 = a1;
        v16 = v21;
      }
      if ( v14 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 32); v15 += 16LL )
        {
          v23 = 3 * i;
          ++v12;
          i = (unsigned int)(i + 1);
          *(_QWORD *)v15 = *(unsigned int *)(*(_QWORD *)(a2 + 56) + 4 * v23);
          *(_DWORD *)(v15 + 8) = v13;
          *(_DWORD *)(v15 + 12) = 1;
        }
        v14 = 0;
      }
      else
      {
        *(_DWORD *)(v15 + 4) = 0;
        *(_DWORD *)v15 = v7;
        *(_DWORD *)(v15 + 8) = v13;
        *(_DWORD *)(v15 + 12) = 1;
        v15 += 16LL;
        ++v12;
      }
      v24 = v13++;
      v7 = v24 | 0x80000000;
    }
    while ( v10 );
    v6 = a6;
    v8 = a5;
  }
  *v8 = v13;
  result = 0LL;
  *v6 = v12;
  return result;
}
