/*
 * XREFs of PropertyGetMixerLevels @ 0x140032C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetMixerLevels(IRP *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  ULONG Length; // r14d
  PKSFILTER FilterFromIrp; // rax
  const GUID *Type; // r8
  unsigned int v10; // ecx
  unsigned __int8 *v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int i; // r9d
  int v15; // eax

  v6 = -1073741811;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    Type = FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24) + 5].Type;
    v10 = 8 * *(_DWORD *)&Type->Data4[4] * *(_DWORD *)Type->Data4;
    a1->IoStatus.Information = v10;
    if ( Length == v10 )
    {
      v11 = *(unsigned __int8 **)&Type[1].Data1;
      v12 = 0;
      if ( *(_DWORD *)Type->Data4 )
      {
        v13 = *(_DWORD *)&Type->Data4[4];
        do
        {
          for ( i = 0; i < v13; v13 = *(_DWORD *)&Type->Data4[4] )
          {
            ++i;
            *a3 = *v11;
            v15 = *((_DWORD *)v11 + 3);
            v11 += 32;
            a3[1] = v15;
            a3 += 2;
          }
          ++v12;
        }
        while ( v12 < *(_DWORD *)Type->Data4 );
      }
      return 0;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  return v6;
}
