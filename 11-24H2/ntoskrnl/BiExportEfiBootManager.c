/*
 * XREFs of BiExportEfiBootManager @ 0x140AB305C
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x140815344 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1408153F4 (BiHandleFirmwareDefaultEntry.c)
 *     BiSetBootOptions @ 0x1408156BC (BiSetBootOptions.c)
 *     BiTranslateObjectIdentifier @ 0x140815734 (BiTranslateObjectIdentifier.c)
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BcdCloseObject @ 0x1409BF5DC (BcdCloseObject.c)
 *     BiGetElement @ 0x1409BFBB8 (BiGetElement.c)
 *     BiQueryBootEntryOrder @ 0x1409C0848 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1409C0924 (BiQueryBootOptions.c)
 *     BiDeleteEfiVariable @ 0x1409C13D0 (BiDeleteEfiVariable.c)
 *     BiSetBootEntryOrder @ 0x1409C1968 (BiSetBootEntryOrder.c)
 *     BiTranslateDisplayOrder @ 0x140AA9DD4 (BiTranslateDisplayOrder.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiExportEfiBootManager(__int64 a1, __int64 **a2)
{
  _QWORD *v2; // r12
  unsigned int v3; // edi
  void *v4; // r13
  void *v5; // r15
  void *v6; // r14
  int v7; // eax
  int v8; // ebx
  int Element; // eax
  void *Pool2; // rax
  void *v11; // rsi
  __int64 **v12; // rbx
  int v13; // r12d
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-59h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-51h] BYREF
  int v24; // [rsp+30h] [rbp-49h] BYREF
  void *v25; // [rsp+38h] [rbp-41h] BYREF
  int v26; // [rsp+40h] [rbp-39h] BYREF
  int v27; // [rsp+44h] [rbp-35h] BYREF
  void *Buf1; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+50h] [rbp-29h] BYREF
  int v30; // [rsp+58h] [rbp-21h] BYREF
  __int64 **v31; // [rsp+60h] [rbp-19h]
  void *Buf2; // [rsp+68h] [rbp-11h] BYREF
  _DWORD *v33; // [rsp+70h] [rbp-9h] BYREF
  _DWORD *v34; // [rsp+78h] [rbp-1h] BYREF
  __int128 v35; // [rsp+80h] [rbp+7h] BYREF
  __int64 v36; // [rsp+90h] [rbp+17h]

  v31 = a2;
  v27 = 0;
  v24 = 0;
  v36 = 0LL;
  v22 = 0;
  v35 = 0LL;
  v26 = 0;
  v2 = 0LL;
  v30 = 0;
  v3 = 0;
  Buf1 = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v33 = 0LL;
  Buf2 = 0LL;
  v34 = 0LL;
  v7 = BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR.Data1, &v25);
  if ( v7 < 0 )
  {
    v8 = 0;
    if ( v7 != -1073741772 )
      v8 = v7;
    goto LABEL_47;
  }
  Element = BiGetElement((__int64)v25, 0x24000001u, &P, &v22);
  v8 = Element;
  if ( Element >= 0 )
  {
    v22 >>= 4;
    Pool2 = (void *)ExAllocatePool2(0x102uLL);
    Buf1 = Pool2;
    v11 = Pool2;
    if ( !Pool2 )
    {
      v8 = -1073741670;
LABEL_41:
      if ( v11 )
        ExFreePoolWithTag(v11, 0x4B444342u);
      if ( v2 )
        ExFreePoolWithTag(v2, 0x4B444342u);
      goto LABEL_45;
    }
    v12 = v31;
    BiTranslateDisplayOrder(v31, P, (__int64)Pool2, &v22);
LABEL_11:
    v13 = BiQueryBootEntryOrder(&Buf2, &v26);
    v14 = BiHandleFirmwareDefaultEntry((__int64)v12, (__int64)v25, &Buf1, &v22);
    v11 = Buf1;
    v8 = v14;
    v5 = Buf2;
    if ( v14 < 0 )
      goto LABEL_40;
    v15 = v22;
    if ( v13 < 0 || !v22 || v26 != v22 || memcmp(Buf1, Buf2, 4LL * v22) )
    {
      v8 = BiSetBootEntryOrder((__int64)v11, v15);
      if ( v8 < 0 )
        goto LABEL_40;
    }
    *(_QWORD *)&v35 = 0x1800000001LL;
    v16 = BiGetElement((__int64)v25, 0x25000004u, &v33, &v30);
    v4 = v33;
    v8 = v16;
    if ( v16 < 0 )
    {
      if ( v16 != -1073741275 )
        goto LABEL_40;
      v8 = BiDeleteEfiVariable(L"Timeout");
      if ( v8 < 0 )
        goto LABEL_40;
      DWORD2(v35) = 0;
    }
    else
    {
      v17 = -1;
      v3 = 1;
      if ( *(_QWORD *)v33 <= 0xFFFFFFFFuLL )
        v17 = *v33;
      DWORD2(v35) = v17;
    }
    v18 = BiGetElement((__int64)v25, 0x24000002u, &v23, &v24);
    v8 = v18;
    if ( v18 >= 0 )
    {
      v2 = v23;
      v3 |= 2u;
      v8 = BiTranslateObjectIdentifier(v31, v23, &v27);
      if ( v8 < 0 )
        goto LABEL_41;
      LODWORD(v36) = v27;
LABEL_30:
      v24 = 0;
      v20 = BiQueryBootOptions(&v34, &v24);
      v6 = v34;
      if ( v20 >= 0 && *v34 == (_DWORD)v35 )
      {
        if ( (v3 & 1) != 0 && v34[2] == DWORD2(v35) )
          v3 &= ~1u;
        if ( (v3 & 2) != 0 && v34[4] == (_DWORD)v36 )
          v3 &= ~2u;
      }
      if ( v3 )
        v8 = BiSetBootOptions((__int64)&v35, v3);
      goto LABEL_41;
    }
    if ( v18 == -1073741275 )
    {
      v19 = BiDeleteEfiVariable(L"BootNext");
      v2 = v23;
      v8 = v19;
      if ( v19 < 0 )
        goto LABEL_41;
      LODWORD(v36) = 0;
      goto LABEL_30;
    }
LABEL_40:
    v2 = v23;
    goto LABEL_41;
  }
  if ( Element == -1073741275 )
  {
    v12 = v31;
    v22 = 0;
    goto LABEL_11;
  }
LABEL_45:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
LABEL_47:
  if ( v25 )
    BcdCloseObject(v25);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v8 < 0 )
    BiLogMessage();
  return (unsigned int)v8;
}
