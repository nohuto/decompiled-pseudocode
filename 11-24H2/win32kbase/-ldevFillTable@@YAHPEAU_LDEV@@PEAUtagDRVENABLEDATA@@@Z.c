/*
 * XREFs of ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z @ 0x140101744
 * Callers:
 *     ldevLoadInternal @ 0x140100EC0 (ldevLoadInternal.c)
 *     ldevLoadDriver @ 0x140101130 (ldevLoadDriver.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x140101E28 (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 * Callees:
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x140101820 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 */

__int64 __fastcall ldevFillTable(struct _LDEV *a1, struct tagDRVENABLEDATA *a2)
{
  DRVFN *pdrvfn; // rcx
  ULONG iDriverVersion; // eax
  ULONG c; // edx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  __int64 v11; // rcx
  int v12; // eax

  pdrvfn = a2->pdrvfn;
  iDriverVersion = a2->iDriverVersion;
  c = a2->c;
  *((_DWORD *)a1 + 16) = iDriverVersion;
  if ( !bFillFunctionTable(pdrvfn, c, (__int64 (**)(void))a1 + 9) )
    return 0LL;
  LODWORD(v6) = 3;
  while ( 1 )
  {
    v7 = v6;
    v6 = (unsigned int)(v6 - 1);
    if ( !v7 )
      break;
    if ( !*((_QWORD *)a1 + (unsigned int)dword_14026DC10[v6] + 9) )
      return 0LL;
  }
  LODWORD(v8) = 2;
  if ( *((_DWORD *)a1 + 8) != 6 )
    goto LABEL_7;
  LODWORD(v11) = 7;
  while ( 1 )
  {
    v12 = v11;
    v11 = (unsigned int)(v11 - 1);
    if ( !v12 )
      break;
    if ( !*((_QWORD *)a1 + (unsigned int)dword_14026DBE0[v11] + 9) )
      return 0LL;
  }
LABEL_7:
  while ( 1 )
  {
    v9 = v8;
    v8 = (unsigned int)(v8 - 1);
    if ( !v9 )
      break;
    if ( (*((_QWORD *)a1 + (unsigned int)dword_14026DC00[2 * v8] + 9) == 0LL) != (*((_QWORD *)a1
                                                                                  + (unsigned int)dword_14026DC04[2 * v8]
                                                                                  + 9) == 0LL) )
      return 0LL;
  }
  return 1LL;
}
