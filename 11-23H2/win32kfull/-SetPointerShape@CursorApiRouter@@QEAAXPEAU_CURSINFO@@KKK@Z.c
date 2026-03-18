/*
 * XREFs of ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C002D738
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002D4B0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     GreMovePointer @ 0x1C001D070 (GreMovePointer.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030A10 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1C0095E38 (-FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     GreSetPointer @ 0x1C00FB808 (GreSetPointer.c)
 *     ?ChangeForceSoftwareCursorFlag@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1C01C0590 (-ChangeForceSoftwareCursorFlag@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C0222714 (--$Write@U-$_tlgWrapSz@D@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ?CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z @ 0x1C0222850 (-CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z.c)
 *     ?DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C0222888 (-DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 */

void __fastcall CursorApiRouter::SetPointerShape(
        CursorApiRouter *this,
        struct _CURSINFO *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v8; // r14d
  int v9; // ebx
  int v10; // edx
  int v11; // r9d
  int v12; // r10d
  int v13; // r11d
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+40h] BYREF

  v18 = (__int64)this;
  if ( ((a3 & 0x20) != 0) != byte_1C035F108 )
  {
    byte_1C035F108 = (a3 & 0x20) != 0;
    InputTraceLogging::Cursor::ChangeForceSoftwareCursorFlag((a3 & 0x20) != 0);
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v18, (struct _EX_PUSH_LOCK *)&qword_1C035F100);
  v8 = dword_1C035F0F8;
  v9 = 0;
  gCursorApiRouter = a3;
  byte_1C035F0E7 = a2 == 0LL;
  if ( a2 )
  {
    byte_1C035F0E4 = FCursorShadowed(a2);
    byte_1C035F0E5 = a4 != 0;
  }
  dword_1C035F0F8 = 2;
  ExReleasePushLockExclusiveEx(v18, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 == 1 )
  {
    CursorApiRouter::DwmSetPointer(0LL, 0);
    GreMovePointer((HDEV)qword_1C035F0E8, dword_1C035F0F0, dword_1C035F0F4, 1);
  }
  GreSetPointer(a2, a3, a4, a5);
  if ( v8 != 2 && (unsigned int)dword_1C0359080 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0359080, 8LL) )
    {
      LODWORD(v20) = v12;
      LODWORD(v18) = v13;
      LODWORD(v19) = v11;
      LOBYTE(v9) = gDWMCapable != 0;
      v15 = (__int64)"ShapeChange";
      LODWORD(v14) = v9;
      v16 = InputTraceLogging::Cursor::CursorApiToString((unsigned int)(v10 - 6));
      v17 = InputTraceLogging::Cursor::CursorApiToString(v8);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C0359080,
        (int)&dword_1C031D4B9,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v20);
    }
  }
}
