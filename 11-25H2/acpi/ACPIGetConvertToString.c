/*
 * XREFs of ACPIGetConvertToString @ 0x140054D74
 * Callers:
 *     ACPIGetWorkerForString @ 0x14003F3E0 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIWideStringToAnsiHelper @ 0x14003F8E8 (ACPIWideStringToAnsiHelper.c)
 *     ACPIGetConvertToStringWide @ 0x14004F820 (ACPIGetConvertToStringWide.c)
 */

__int64 __fastcall ACPIGetConvertToString(__int64 a1, int a2, __int64 a3, int a4, char **a5, unsigned int *a6)
{
  char **v6; // rsi
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]

  v11 = HIDWORD(a1);
  v6 = a5;
  v10 = 0;
  v7 = ACPIGetConvertToStringWide(a1, a2, a3, a4, a5, &v10);
  if ( v7 >= 0 )
  {
    v8 = v10;
    ACPIWideStringToAnsiHelper(*v6, v10);
    if ( a6 )
      *a6 = v8 >> 1;
  }
  return (unsigned int)v7;
}
