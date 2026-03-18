/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14000F604 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     GreGetRgnBox @ 0x14002B0D0 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x14002B1F0 (GrePtInRegion.c)
 *     NtGdiDeleteObjectApp @ 0x14002B3A0 (NtGdiDeleteObjectApp.c)
 *     GreGetRegionData @ 0x14002B770 (GreGetRegionData.c)
 *     GreOffsetRgn @ 0x14002C0D0 (GreOffsetRgn.c)
 *     bDeleteRegion @ 0x14002C420 (bDeleteRegion.c)
 *     GreSetRectRgn @ 0x14002C480 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14002C870 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x14002CCB0 (SetRectRgnIndirect.c)
 *     GreEqualRgn @ 0x140066030 (GreEqualRgn.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GreRectInRegion @ 0x1400D1D60 (GreRectInRegion.c)
 *     GreIsValidRegion @ 0x14012F4C0 (GreIsValidRegion.c)
 *     GreCopyVisRgn @ 0x140179AC0 (GreCopyVisRgn.c)
 *     InitializeGre @ 0x1402E6D50 (InitializeGre.c)
 * Callees:
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x14000D050 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400268F0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     HmgLock @ 0x14002FF60 (HmgLock.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     PushThreadGuardedObject @ 0x140068920 (PushThreadGuardedObject.c)
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C1EE0 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3, int a4)
{
  bool v8; // zf
  _OWORD *v9; // rcx
  RGNOBJAPI *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  _DWORD *v16; // rdi
  char v17; // cl
  OBJECT *v18; // rcx
  int v20; // [rsp+34h] [rbp-D4h] BYREF
  int v21; // [rsp+38h] [rbp-D0h] BYREF
  char *v22; // [rsp+40h] [rbp-C8h]
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  struct _RECTL v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-88h] BYREF
  void *v28; // [rsp+90h] [rbp-78h]
  int v29; // [rsp+98h] [rbp-70h]
  int v30; // [rsp+9Ch] [rbp-6Ch]
  int *v31; // [rsp+A0h] [rbp-68h]
  __int64 v32; // [rsp+A8h] [rbp-60h]
  __int64 *v33; // [rsp+B0h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-50h]
  int *v35; // [rsp+C0h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp-40h]

  v23 = (__int64)this;
  *(_QWORD *)this = 0LL;
  v8 = (RGNOBJAPI *)((char *)this + 8) == 0LL;
  v9 = (_OWORD *)((char *)this + 8);
  *v9 = 0LL;
  v9[1] = 0LL;
  v10 = this;
  if ( v8 )
    v10 = 0LL;
  PushThreadGuardedObject(v9, v10, UnexpectedThreadTerminationHandler<RGNOBJAPI>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v11) = 4;
  v12 = HmgLock(a2, v11);
  *(_QWORD *)this = v12;
  v22 = (char *)this + 40;
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 12) = a3;
  if ( v12 )
  {
    v13 = 1;
    if ( a4 && *(_WORD *)(v12 + 12) != 1 )
    {
      if ( (unsigned int)dword_14029AF48 > 5
        && (qword_14029AF58 & 0x400000000000LL) != 0
        && (qword_14029AF60 & 0x400000000000LL) == qword_14029AF60 )
      {
        v20 = 0;
        v23 = 0x1000000LL;
        v21 = 82559;
        v35 = &v20;
        v36 = 4LL;
        v33 = &v23;
        v34 = 8LL;
        v31 = &v21;
        v32 = 4LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x400000000000LL;
        UserData.Ptr = (ULONGLONG)off_14029AF50;
        UserData.Size = *(unsigned __int16 *)off_14029AF50;
        UserData.Reserved = 2;
        v28 = &unk_1402764A6;
        v29 = 40;
        v30 = 1;
        LODWORD(v22) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwWriteTransfer(qword_14029AF68, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
      }
LABEL_23:
      v18 = *(OBJECT **)this;
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      if ( *((_WORD *)v18 + 6) == 0xFFFF )
        OBJECT::ReportOverflow(v18, 3u);
      *((_QWORD *)this + 5) = 0LL;
      *(_QWORD *)this = 0LL;
      return this;
    }
    v14 = HmgPentryFromPobj(v12);
    v15 = GreDecodeUserModePointer(*(void **)(v14 + 16));
    v16 = (_DWORD *)v15;
    if ( v15 )
    {
      v25 = *(struct _RECTL *)v15;
      v26 = *(_QWORD *)(v15 + 16);
      v17 = _mm_cvtsi128_si32((__m128i)v25);
      if ( (v17 & 0x11) != 0x10 )
      {
LABEL_21:
        v13 = 0;
        goto LABEL_22;
      }
      if ( (v17 & 0x20) == 0 )
        goto LABEL_22;
      if ( v25.top == 1 )
      {
        RGNOBJ::vSet(this);
        *v16 &= ~0x20u;
        goto LABEL_22;
      }
      if ( v25.top == 2 )
      {
        if ( (((v25.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
          && (((HIDWORD(v26) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
          && (((v26 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
          && (((v25.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
        {
          RGNOBJ::vSet(this, (struct _RECTL *)&v25.right);
          *v16 &= ~0x20u;
          goto LABEL_22;
        }
        goto LABEL_21;
      }
    }
LABEL_22:
    if ( v13 )
      return this;
    goto LABEL_23;
  }
  return this;
}
