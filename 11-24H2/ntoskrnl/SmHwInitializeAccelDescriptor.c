/*
 * XREFs of SmHwInitializeAccelDescriptor @ 0x14079CECC
 * Callers:
 *     SmHwAcceleratorParitionCtxCreate @ 0x14079C9E8 (SmHwAcceleratorParitionCtxCreate.c)
 * Callees:
 *     AccelInitializeCompressionWorkspace @ 0x140664264 (AccelInitializeCompressionWorkspace.c)
 *     AccelInitializeDescriptor @ 0x1406643A0 (AccelInitializeDescriptor.c)
 *     AccelSetDescriptorAddressSpace @ 0x140664588 (AccelSetDescriptorAddressSpace.c)
 */

__int64 __fastcall SmHwInitializeAccelDescriptor(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v8; // r12
  int v9; // r13d
  int v10; // eax
  __int64 v11; // rdx
  __int64 result; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+3Ch] [rbp-24h]
  int v16; // [rsp+40h] [rbp-20h]
  int v17; // [rsp+44h] [rbp-1Ch]
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+58h] [rbp-8h]
  int v21; // [rsp+5Ch] [rbp-4h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a1 + 32;
  v5 = 0;
  if ( *(_DWORD *)(a2 + 64) )
  {
    v8 = a3;
    v9 = 7 - (a3 != 0);
    do
    {
      AccelInitializeDescriptor(*(_QWORD *)(a2 + 8 * v8 + 16), *(_DWORD *)(a2 + 40), v4);
      v10 = *(_DWORD *)(a2 + 4 * v8 + 56);
      v18 = 0LL;
      v21 = 0;
      v13[2] = 0LL;
      v14 = 0;
      v16 = 1;
      v17 = 1;
      v13[0] = 4194305LL;
      v13[1] = v4;
      v15 = v9;
      v19 = v3;
      v20 = v10;
      AccelInitializeCompressionWorkspace((__int64)v13);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
      if ( v11 )
        AccelSetDescriptorAddressSpace(v4, v11);
      ++v5;
      v4 += *(unsigned int *)(a2 + 40);
      result = *(unsigned int *)(a2 + 4 * v8 + 56);
      v3 += result;
    }
    while ( v5 < *(_DWORD *)(a2 + 64) );
  }
  return result;
}
