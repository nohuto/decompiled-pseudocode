/*
 * XREFs of ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140198814
 * Callers:
 *     ClientGetListboxString @ 0x140089900 (ClientGetListboxString.c)
 *     xxxClientLoadStringW @ 0x140114990 (xxxClientLoadStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x140184A70 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnIMECONTROL @ 0x1401E57B0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1401F4340 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402B8A10 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnPOUTLPINT @ 0x1402BAED0 (SfnPOUTLPINT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateCallbackData(struct _CAPTUREBUF *a1, unsigned int a2, void **a3)
{
  _BYTE *v4; // rcx
  bool v5; // zf

  if ( a2 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v4 = (_BYTE *)*((_QWORD *)a1 + 2);
  v5 = *((_QWORD *)a1 + 4) == 0LL;
  *((_QWORD *)a1 + 2) = &v4[(a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
  if ( v5 )
  {
    *a3 = (void *)(v4 - (_BYTE *)a1);
    *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a3 - (_DWORD)a1;
  }
  else
  {
    *a3 = v4;
  }
  return 0LL;
}
