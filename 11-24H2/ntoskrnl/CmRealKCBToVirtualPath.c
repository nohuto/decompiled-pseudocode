/*
 * XREFs of CmRealKCBToVirtualPath @ 0x14090A7C8
 * Callers:
 *     CmpReparseToVirtualPath @ 0x1407DBB68 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DBC0C (CmpReplicateKeyToVirtual.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DD868 (CmpReportAuditVirtualizationEvent.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14090B474 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteCreateLogic @ 0x140A203DC (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructName @ 0x1408763E0 (CmpConstructName.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     CmpGetVirtualizationID @ 0x140909F58 (CmpGetVirtualizationID.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, UNICODE_STRING *a2, int *a3, UNICODE_STRING *a4)
{
  char v7; // r15
  _QWORD *v8; // rsi
  int VirtualizationID; // ebx
  unsigned __int16 v10; // bx
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // ax
  __int64 Pool2; // rax
  wchar_t *v14; // rax
  UNICODE_STRING v16; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v18; // [rsp+40h] [rbp-10h] BYREF

  v7 = 0;
  Source = 0LL;
  v16 = 0LL;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v8 = (_QWORD *)CmpConstructName(a1, (__int64)a2, (__int64)a3, (__int64)a4);
  if ( !v8 )
    return 3221225626LL;
  VirtualizationID = CmpGetVirtualizationID(&Source, a3);
  if ( VirtualizationID >= 0 )
  {
    v10 = *(_WORD *)v8 + Source.Length + 38;
    if ( a2 )
    {
      Buffer = a2->Buffer;
      v16 = *a2;
      if ( Buffer )
      {
        Length = v16.Length;
        if ( v16.Length )
        {
          if ( *Buffer )
          {
            if ( *Buffer == 92 )
            {
              v16.Buffer = Buffer + 1;
              Length = v16.Length - 2;
              v16.Length -= 2;
            }
            if ( Length )
            {
              v10 += Length + 2;
              v7 = 1;
            }
          }
        }
      }
    }
    Pool2 = ExAllocatePool2(0x100uLL);
    a4->Buffer = (wchar_t *)Pool2;
    if ( Pool2 )
    {
      a4->MaximumLength = v10;
      a4->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_24;
      VirtualizationID = RtlAppendUnicodeStringToString(a4, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_24;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v14 = (wchar_t *)(v8[1] + 18LL),
            *(_QWORD *)&v18.Length = *v8,
            v18.Buffer = v14,
            v18.Length = *(_WORD *)v8 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(a4, &v18),
            VirtualizationID < 0)
        || v7
        && ((VirtualizationID = RtlAppendUnicodeToString(a4, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(a4, &v16), VirtualizationID < 0)) )
      {
LABEL_24:
        RtlFreeAnsiString(a4);
      }
    }
    else
    {
      VirtualizationID = -1073741670;
    }
  }
  CmpFreeTransientPoolWithTag(v8, 0x624E4D43u);
  if ( Source.Buffer )
    ExFreePool(Source.Buffer);
  return (unsigned int)VirtualizationID;
}
