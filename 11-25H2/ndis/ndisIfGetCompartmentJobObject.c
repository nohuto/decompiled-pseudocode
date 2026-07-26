/*
 * XREFs of ndisIfGetCompartmentJobObject @ 0x140072420
 * Callers:
 *     NdisGetAndReferenceCompartmentJobObject @ 0x140072400 (NdisGetAndReferenceCompartmentJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfGetCompartmentJobObject(unsigned int a1, unsigned int *a2, __int64 a3)
{
  KIRQL v6; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v7; // r9
  KIRQL v8; // bp
  unsigned int v9; // esi
  unsigned int v11; // eax
  char *v12; // r14
  char *v13; // rbx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v7 = qword_140126AF0;
  v8 = v6;
  if ( qword_140126AF0 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
    goto LABEL_5;
  while ( *((_DWORD *)v7 + 4) != a1 )
  {
    if ( *((_DWORD *)v7 + 4) <= a1 )
    {
      v7 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v7;
      if ( v7 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
        continue;
    }
    goto LABEL_5;
  }
  if ( !v7 )
  {
LABEL_5:
    *a2 = 0;
    v9 = -1073741275;
  }
  else
  {
    v11 = *((_DWORD *)v7 + 430);
    if ( v11 <= *a2 )
    {
      v9 = 0;
      v12 = (char *)v7 + 1728;
      *a2 = 0;
      v13 = (char *)*((_QWORD *)v7 + 216);
      if ( v13 != (char *)v7 + 1728 )
      {
        do
        {
          ObfReferenceObject(*((PVOID *)v13 + 2));
          *(_QWORD *)(a3 + 8LL * (*a2)++) = *((_QWORD *)v13 + 2);
          v13 = *(char **)v13;
        }
        while ( v13 != v12 );
      }
    }
    else
    {
      *a2 = v11;
      v9 = 261;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v8);
  return v9;
}
