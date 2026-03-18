/*
 * XREFs of ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140196E58
 * Callers:
 *     ClientGetListboxString @ 0x140089900 (ClientGetListboxString.c)
 *     xxxClientLoadStringW @ 0x140114990 (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x140133BCC (xxxClientExpandStringW.c)
 *     SfnOUTSTRING @ 0x140176180 (SfnOUTSTRING.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x140184A70 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnINCNTOUTSTRING @ 0x1401F4340 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402B8A10 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcOutputStringSize(struct _CALLBACKSTATUS *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // ecx
  __int64 v7; // rbx
  ULONG v9; // ecx
  unsigned __int64 v10; // rcx
  ULONG v12; // r8d
  ULONG BytesInMultiByteString; // [rsp+40h] [rbp+18h] BYREF

  BytesInMultiByteString = 0;
  v5 = *((_DWORD *)a1 + 2);
  v7 = a2;
  if ( v5 )
    ProbeForRead(*((volatile void **)a1 + 2), v5, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( a3 )
  {
    v10 = *((unsigned int *)a1 + 2);
    if ( a4 )
    {
LABEL_6:
      if ( (unsigned int)v7 < (unsigned int)v10 )
        LODWORD(v10) = v7;
      return (unsigned int)v10;
    }
    v12 = 2 * v7;
    if ( 2 * v7 >= v10 )
      v12 = *((_DWORD *)a1 + 2);
    RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 2), v12);
    LODWORD(v10) = BytesInMultiByteString;
  }
  else
  {
    v9 = *((_DWORD *)a1 + 2);
    if ( !a4 )
    {
      LODWORD(v10) = v9 >> 1;
      goto LABEL_6;
    }
    if ( (unsigned int)v7 < v9 )
      v9 = v7;
    RtlMultiByteToUnicodeSize(&BytesInMultiByteString, *((const CHAR **)a1 + 2), v9);
    LODWORD(v10) = BytesInMultiByteString >> 1;
  }
  return (unsigned int)v10;
}
