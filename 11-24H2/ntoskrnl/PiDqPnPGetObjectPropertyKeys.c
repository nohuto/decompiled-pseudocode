/*
 * XREFs of PiDqPnPGetObjectPropertyKeys @ 0x14097C698
 * Callers:
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408E0590 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14097FDF8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 * Callees:
 *     _PnpGetObjectPropertyKeys @ 0x14097C800 (_PnpGetObjectPropertyKeys.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14097D12C (_PnpGetGenericStorePropertyKeys.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyKeys(int a1, int a2, int a3, __int64 a4, PVOID *a5, _DWORD *a6)
{
  ULONG_PTR v9; // rbx
  __int64 Pool2; // rax
  int v11; // r9d
  unsigned __int64 v12; // rdx
  int ObjectPropertyKeys; // eax
  unsigned int v14; // ebx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-48h]

  v9 = 6000LL;
  *a5 = 0LL;
  while ( 1 )
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    Pool2 = ExAllocatePool2(0x100uLL, v9, 0x58706E50u);
    *a5 = (PVOID)Pool2;
    if ( !Pool2 )
    {
      v14 = -1073741670;
      goto LABEL_12;
    }
    *a6 = 0;
    v12 = v9 / 0x14;
    if ( a2 )
    {
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(PiPnpRtlCtx, a1, a2, a3, v17, 1, Pool2, v12, (__int64)a6);
    }
    else
    {
      LOBYTE(v11) = 1;
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(PiPnpRtlCtx, a3, 0, v11, Pool2, v12, (__int64)a6);
    }
    v14 = ObjectPropertyKeys;
    if ( ObjectPropertyKeys != -1073741789 )
      break;
    v16 = (unsigned int)*a6;
    if ( (unsigned __int64)(20 * v16) > 0xFFFFFFFF )
    {
      v14 = -1073741675;
      goto LABEL_12;
    }
    v9 = (unsigned int)(20 * v16);
  }
  if ( ObjectPropertyKeys >= 0 )
    goto LABEL_9;
LABEL_12:
  *a6 = 0;
LABEL_9:
  if ( !*a6 && *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return v14;
}
