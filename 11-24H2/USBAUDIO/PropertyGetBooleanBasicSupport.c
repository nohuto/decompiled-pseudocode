/*
 * XREFs of PropertyGetBooleanBasicSupport @ 0x14003DA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetBooleanBasicSupport(IRP *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  unsigned int Length; // ebp
  PKSFILTER FilterFromIrp; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  ULONG_PTR v11; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rdx

  v6 = -1073741808;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( !FilterFromIrp )
    return v6;
  v9 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
  if ( v9 )
  {
    v10 = *(unsigned int *)(v9 + 92);
    v11 = (unsigned int)(16 * v10 + 56);
    if ( Length < 4 )
    {
      a1->IoStatus.Information = v11;
      return (unsigned int)-1073741789;
    }
    else
    {
      a1->IoStatus.Information = 4LL;
      v6 = 0;
      *(_DWORD *)a3 = 515;
      if ( Length >= 0x28 )
      {
        *(_DWORD *)(a3 + 4) = v11;
        *(_QWORD *)(a3 + 24) = 11LL;
        *(_QWORD *)(a3 + 32) = 1LL;
        *(GUID *)(a3 + 8) = KSPROPTYPESETID_General;
        a1->IoStatus.Information = 40LL;
        if ( Length >= (unsigned int)v11 )
        {
          *(_DWORD *)(a3 + 44) = 16;
          *(_DWORD *)(a3 + 40) = 2;
          *(_DWORD *)(a3 + 52) = 2;
          *(_DWORD *)(a3 + 48) = v10;
          a1->IoStatus.Information = v11;
          if ( (_DWORD)v10 )
          {
            v13 = (_DWORD *)(a3 + 68);
            v14 = v10;
            do
            {
              *(v13 - 3) = 1;
              *(v13 - 1) = 0;
              *v13 = 1;
              v13 += 4;
              --v14;
            }
            while ( v14 );
          }
        }
      }
    }
    return v6;
  }
  return 3221225860LL;
}
