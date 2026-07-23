/*
 * XREFs of MiFreeDriverInitialization @ 0x140A39960
 * Callers:
 *     MiFreeBootDriverInitializationCode @ 0x1407D7E90 (MiFreeBootDriverInitializationCode.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     MmFreeDriverInitialization @ 0x140A39550 (MmFreeDriverInitialization.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSnapDriverRange @ 0x140A39B68 (MiSnapDriverRange.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 */

__int64 __fastcall MiFreeDriverInitialization(__int64 a1)
{
  PVOID v1; // rbx
  __int64 result; // rax
  int v4; // ebx
  PVOID v5; // rt1
  PVOID v6; // rt1
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(PVOID *)(a1 + 48);
  v8 = 0LL;
  v7 = 0LL;
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( !(_DWORD)result || (v6 = *(PVOID *)&KeNumberProcessorsGroup0[9], v1 == v6) || v1 == PsHalImageBase )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x800) == 0 )
    {
      if ( !dword_140FC4248 || (v5 = *(PVOID *)&KeNumberProcessorsGroup0[9], v1 != v5) && v1 != PsHalImageBase )
      {
        v4 = 0;
        do
        {
          result = MiSnapDriverRange(a1, v4, 2, 0, (__int64)&v7, (__int64)&v8);
          v4 = result;
          if ( v7 )
            result = MiFreeInitializationCode(a1, v7, v8, 0LL);
        }
        while ( v4 );
      }
    }
  }
  return result;
}
