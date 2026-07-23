/*
 * XREFs of IommuPasidDeviceCreate @ 0x140701910
 * Callers:
 *     <none>
 * Callees:
 *     IommupPasidDeviceCreate @ 0x14054BED8 (IommupPasidDeviceCreate.c)
 *     ExFreeAsid @ 0x140656E48 (ExFreeAsid.c)
 *     ExpAllocateAsid @ 0x1406570F8 (ExpAllocateAsid.c)
 */

__int64 __fastcall IommuPasidDeviceCreate(__int64 a1, __int64 *a2, int *a3)
{
  unsigned int Asid; // eax
  int v7; // edi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *a3 = -1;
  *a2 = 0LL;
  v11 = 0LL;
  if ( *(_BYTE *)(a1 + 273) && (*(_DWORD *)(a1 + 384) & 4) != 0 )
  {
    Asid = ExpAllocateAsid(a1, 0LL);
    v7 = Asid;
    if ( Asid - 1 > 0xFFFFFFFD )
    {
      return (unsigned int)-1073741709;
    }
    else
    {
      v8 = IommupPasidDeviceCreate(a1, Asid, &v11);
      if ( v8 < 0 )
      {
        ExFreeAsid(v7);
      }
      else
      {
        v9 = v11;
        *a3 = v7;
        *a2 = v9;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v8;
}
