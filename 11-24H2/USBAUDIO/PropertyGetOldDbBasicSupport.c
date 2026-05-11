/*
 * XREFs of PropertyGetOldDbBasicSupport @ 0x14003DB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetOldDbBasicSupport(IRP *a1, __int64 a2, __int64 a3)
{
  PKSFILTER FilterFromIrp; // rax
  unsigned int v7; // r8d
  unsigned int v8; // esi
  unsigned int Length; // r10d
  __int64 v10; // rbp
  unsigned int v11; // r12d
  __int64 v12; // rcx
  ULONG_PTR v13; // rax
  __int64 v14; // rdx
  _OWORD *v15; // r10
  unsigned int v16; // r9d
  _OWORD *v17; // r11
  _QWORD *v18; // r14
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // r15
  __int64 v22; // rcx
  unsigned int v24; // [rsp+60h] [rbp+8h]

  FilterFromIrp = KsGetFilterFromIrp(a1);
  v7 = -1073741811;
  v8 = 1;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( FilterFromIrp )
  {
    v10 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
    v11 = *(_DWORD *)(v10 + 92);
    v12 = v10 + 128;
    v24 = v11;
    if ( *(_DWORD *)(a2 + 16) == 18 )
      v8 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
    v13 = 16 * v11 * v8 + 56;
    if ( Length >= 4 )
    {
      v7 = 0;
      a1->IoStatus.Information = 4LL;
      *(_DWORD *)a3 = 515;
      if ( Length >= 0x28 )
      {
        *(_DWORD *)(a3 + 28) = 0;
        *(_DWORD *)(a3 + 36) = 0;
        *(_DWORD *)(a3 + 4) = v13;
        *(_DWORD *)(a3 + 24) = 3;
        *(_DWORD *)(a3 + 32) = 1;
        *(GUID *)(a3 + 8) = KSPROPTYPESETID_General;
        a1->IoStatus.Information = 40LL;
        if ( Length >= (unsigned int)v13 )
        {
          v14 = *(_QWORD *)v12;
          v15 = (_OWORD *)(a3 + 56);
          *(_DWORD *)(a3 + 44) = 16;
          v16 = 0;
          *(_DWORD *)(a3 + 40) = 2;
          *(_DWORD *)(a3 + 52) = 2;
          *(_DWORD *)(a3 + 48) = v11;
          a1->IoStatus.Information = v13;
          if ( v11 )
          {
            v17 = (_OWORD *)(v14 + 16);
            v18 = (_QWORD *)(v14 + 32);
            do
            {
              v19 = *(_DWORD *)(v10 + 96);
              if ( _bittest(&v19, v16) )
              {
                if ( *(_DWORD *)(a2 + 16) == 18 )
                {
                  v20 = 0;
                  if ( v8 )
                  {
                    v21 = 0LL;
                    do
                    {
                      v22 = 2LL * (v8 * v16 + v20);
                      v21 += 20LL;
                      ++v20;
                      *(_OWORD *)(a3 + 56 + 8 * v22) = *(_OWORD *)(v21 + *v18 - 16);
                    }
                    while ( v20 < v8 );
                    v11 = v24;
                  }
                }
                else
                {
                  *v15 = *v17;
                }
              }
              ++v16;
              v18 += 5;
              v17 += 2;
              ++v15;
            }
            while ( v16 < v11 );
          }
        }
      }
    }
    else
    {
      a1->IoStatus.Information = v13;
      return (unsigned int)-1073741789;
    }
  }
  return v7;
}
