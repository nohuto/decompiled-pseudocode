/*
 * XREFs of NVMeControllerPreparePLDR @ 0x14001D3BC
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeSetHostMemoryBuffer @ 0x140006A20 (NVMeSetHostMemoryBuffer.c)
 *     IoQueuesDeletion @ 0x140007DE0 (IoQueuesDeletion.c)
 *     RoundUp64 @ 0x14000D3E0 (RoundUp64.c)
 *     NVMeIsDeviceGone @ 0x140017120 (NVMeIsDeviceGone.c)
 *     Feature_PLDRFixes__private_IsEnabledDeviceUsageNoInline @ 0x140019F80 (Feature_PLDRFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NVMeControllerPreparePLDR(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int *v9; // r9
  unsigned int v10; // eax
  void *Src; // rcx
  unsigned int v12; // r9d
  unsigned __int64 v13; // r9
  unsigned int v14; // eax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned int v17; // r10d
  int v18; // ecx
  unsigned int i; // esi
  int v20; // eax
  signed __int32 v22[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 1560);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 1) == 0
    || NVMeIsDeviceGone(a1, a2, a3)
    || (*(_DWORD *)(v7 + 24) & 0x440000) != 0 )
  {
    if ( (unsigned int)Feature_PLDRFixes__private_IsEnabledDeviceUsageNoInline() )
      *(_DWORD *)(a1 + 24) |= 0x20000u;
  }
  else
  {
    v9 = *(unsigned int **)(v7 + 3720);
    if ( !v9
      || (v10 = v9[1],
          Src = v9 + 2,
          v12 = *v9,
          LODWORD(Size) = v10,
          (v3 = NVMeSetHostMemoryBuffer(a1, 0, 0, v12, Src, Size)) == 0) )
    {
      if ( (unsigned __int8)IoQueuesDeletion(a1, v6, v8, (__int64)v9) )
      {
        v14 = *(_DWORD *)(v4 + 88);
        if ( v14 )
          v15 = RoundUp64(v14, 0x2710uLL) / 0x2710;
        else
          LODWORD(v15) = 500;
        if ( *(_BYTE *)(a1 + 47) )
        {
          v16 = RoundUp64((unsigned int)v15, 0x64uLL);
          v18 = v17;
          v13 = v16 / 0x64;
          if ( (unsigned int)(v16 / 0x64) > v17 )
            v18 = v16 / 0x64;
          LODWORD(v15) = 100 * v18;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) & 0xFFFF3FFF | 0x4000;
        _InterlockedOr(v22, 0);
        for ( i = 0; i < (unsigned int)v15; ++i )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 0xC) == 8 )
            break;
          StorPortExtendedFunction(81LL, a1, 10000LL, v13);
        }
        v20 = *(_DWORD *)(a1 + 24);
        if ( i < (unsigned int)v15 )
        {
          *(_DWORD *)(a1 + 24) = v20 | 0x20000;
          return 0;
        }
        else
        {
          v3 = -1056964594;
          *(_DWORD *)(a1 + 24) = v20 | 0x200000;
        }
      }
      else
      {
        return (unsigned int)-1056964599;
      }
    }
  }
  return v3;
}
