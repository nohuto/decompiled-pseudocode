/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x1400E4890
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x14016B4D0 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140002CF8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333@Z @ 0x140002EF4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x140097A5C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E5170 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DrvDxgkWriteDiagEntry @ 0x1400E5440 (DrvDxgkWriteDiagEntry.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettings(
        _OWORD *a1,
        void *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  struct tagDESKTOP *v7; // r15
  __int64 v9; // rbx
  struct _UNICODE_STRING *v10; // r14
  ULONG_PTR v11; // rsi
  unsigned __int16 v12; // dx
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // ebx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v17; // rax
  const void *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  struct tagTHREADINFO *v22; // rax
  void *v24; // rbx
  unsigned int v25; // r15d
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // edx
  WCHAR *v31; // rdx
  PWSTR Buffer; // r8
  __int64 v33; // rcx
  WCHAR v34; // ax
  WCHAR *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rsi
  unsigned int v38; // r8d
  _BOOL8 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r9
  unsigned __int16 v42; // [rsp+70h] [rbp-E8h]
  void *v43; // [rsp+78h] [rbp-E0h] BYREF
  char v44[4]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int16 v45; // [rsp+84h] [rbp-D4h]
  unsigned int v46; // [rsp+88h] [rbp-D0h] BYREF
  unsigned int v47; // [rsp+8Ch] [rbp-CCh] BYREF
  int v48; // [rsp+90h] [rbp-C8h] BYREF
  _OWORD *v49; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-B8h] BYREF
  ULONG_PTR v51[2]; // [rsp+A8h] [rbp-B0h] BYREF
  void (__fastcall *v52)(char *); // [rsp+B8h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+C0h] [rbp-98h] BYREF
  void (__fastcall *v54)(char *); // [rsp+D0h] [rbp-88h]
  int v55; // [rsp+D8h] [rbp-80h] BYREF
  void *v56; // [rsp+E0h] [rbp-78h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v57; // [rsp+E8h] [rbp-70h] BYREF
  struct tagDESKTOP *v58; // [rsp+F0h] [rbp-68h] BYREF
  void *Src[2]; // [rsp+F8h] [rbp-60h]
  GUID ActivityId; // [rsp+108h] [rbp-50h] BYREF

  v46 = a4;
  v7 = a3;
  v58 = a3;
  v49 = a1;
  v43 = a2;
  v56 = a5;
  v57 = a7;
  ActivityId = 0LL;
  v9 = MEMORY[0xFFFFF78000000320];
  v50 = v9 * KeQueryTimeIncrement();
  v10 = 0LL;
  v11 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v51);
  if ( v49 )
  {
    *(_OWORD *)Src = *a1;
    v13 = LOWORD(Src[0]);
    v10 = (struct _UNICODE_STRING *)Win32AllocPoolWithQuotaZInitImpl(
                                      MmUserProbeAddress,
                                      LOWORD(Src[0]) + 18LL,
                                      0x73726447u);
    v15 = -1;
    if ( !v10 )
      goto LABEL_24;
    if ( v54 != (void (__fastcall *)(char *))-1LL )
    {
      BugCheckParameter4 = PtiCurrent(v14);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4);
    }
    v17 = PtiCurrent(v14);
    BugCheckParameter2[0] = *((_QWORD *)v17 + 48);
    *((_QWORD *)v17 + 48) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)v10;
    v54 = GreDeleteFastMutex;
    v10->Buffer = &v10[1].Length;
    v10->Length = v13;
    v10->MaximumLength = v13 + 2;
    v12 = 0;
    if ( (_WORD)v13 )
    {
      v18 = Src[1];
      if ( (char *)Src[1] + v13 > (void *)MmUserProbeAddress || (char *)Src[1] + v13 < Src[1] )
      {
        v18 = Src[1];
        LOWORD(v13) = Src[0];
      }
      memmove(v10->Buffer, v18, (unsigned __int16)v13);
      v12 = 0;
    }
    v10->Buffer[(unsigned __int64)(unsigned __int16)v13 >> 1] = 0;
    v7 = v58;
  }
  else
  {
    v15 = -1;
  }
  if ( v43 )
  {
    v45 = v12;
    if ( ((unsigned __int8)v43 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v42 = *((_WORD *)v43 + 34);
    v19 = *((unsigned __int16 *)v43 + 35);
    v45 = *((_WORD *)v43 + 35);
    if ( (unsigned __int16)(v42 - 188) > 0x20u )
    {
      v15 = -2;
    }
    else
    {
      v11 = Win32AllocPoolWithQuotaZInitImpl(188LL, v19 + 220, 0x73726447u);
      if ( v11 )
      {
        if ( v52 != (void (__fastcall *)(char *))-1LL )
        {
          v21 = PtiCurrent(v20);
          KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)v51, v11, (ULONG_PTR)v21);
        }
        v22 = PtiCurrent(v20);
        v51[0] = *((_QWORD *)v22 + 48);
        *((_QWORD *)v22 + 48) = v51;
        v51[1] = v11;
        v52 = GreDeleteFastMutex;
        if ( (_DWORD)v19 + v42 && ((unsigned __int8)v43 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        memmove((void *)v11, v43, v42);
        memmove((void *)(v11 + 220), (char *)v43 + v42, v45);
        *(_WORD *)(v11 + 68) = 220;
        *(_WORD *)(v11 + 70) = v45;
        goto LABEL_25;
      }
    }
LABEL_24:
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v51);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
    return v15;
  }
LABEL_25:
  v24 = v56;
  v25 = xxxUserChangeDisplaySettingsInternal(v10, (struct _devicemodeW *)v11, v7, v46, v56, a6, v57);
  v26 = Win32AllocPoolZInitImpl(256LL, 0x90uLL, 0x64437355u);
  v27 = v26;
  if ( v26 )
  {
    *(_DWORD *)v26 = 4;
    *(_DWORD *)(v26 + 4) = 144;
    *(_DWORD *)(v26 + 40) = 0;
    *(_QWORD *)(v26 + 32) = 0LL;
    *(_QWORD *)(v26 + 8) = 0LL;
    *(_OWORD *)(v26 + 16) = 0LL;
    *(_QWORD *)(v26 + 56) = v50;
    if ( !v43 || (v28 = 1, !v11) )
      v28 = 0;
    *(_DWORD *)(v26 + 140) = v28 | *(_DWORD *)(v26 + 140) & 0xFFFFFFFE;
    if ( !v49 || !v10 || !v10->Length || (v29 = 2, !v10->Buffer) )
      v29 = 0;
    v30 = (v24 == 0LL ? 8 : 0) | (a6 == KernelMode ? 4 : 0) | v29 & 0xFFFFFFF3 | *(_DWORD *)(v27 + 140) & 0xFFFFFFF1;
    *(_DWORD *)(v27 + 140) = v30;
    *(_DWORD *)(v27 + 48) = v46;
    *(_DWORD *)(v27 + 52) = v25;
    if ( (v30 & 2) != 0 )
    {
      v31 = (WCHAR *)(v27 + 108);
      Buffer = v10->Buffer;
      v33 = 16LL;
      do
      {
        if ( v33 == -2147483630 )
          break;
        v34 = *Buffer;
        if ( !*Buffer )
          break;
        ++Buffer;
        *v31++ = v34;
        --v33;
      }
      while ( v33 );
      v35 = v31 - 1;
      if ( v33 )
        v35 = v31;
      *v35 = 0;
      if ( !v33 )
        *(_WORD *)(v27 + 108) = 0;
    }
    if ( (*(_DWORD *)(v27 + 140) & 1) != 0 && *(_WORD *)(v11 + 68) >= 0xB4u )
    {
      *(_DWORD *)(v27 + 64) = *(_DWORD *)(v11 + 72);
      *(_QWORD *)(v27 + 68) = *(_QWORD *)(v11 + 76);
      *(_DWORD *)(v27 + 76) = *(_DWORD *)(v11 + 168);
      *(_DWORD *)(v27 + 80) = *(_DWORD *)(v11 + 172);
      *(_DWORD *)(v27 + 84) = *(_DWORD *)(v11 + 176);
      *(_DWORD *)(v27 + 88) = *(_DWORD *)(v11 + 184);
      *(_DWORD *)(v27 + 92) = *(unsigned __int16 *)(v11 + 70);
      *(_DWORD *)(v27 + 96) = *(_DWORD *)(v11 + 84);
      *(_DWORD *)(v27 + 100) = *(_DWORD *)(v11 + 88);
      *(_DWORD *)(v27 + 104) = *(_DWORD *)(v11 + 180);
    }
    DrvDxgkWriteDiagEntry(v27);
    v36 = MEMORY[0xFFFFF78000000320];
    v37 = v36 * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v38 = dword_14029ADF8;
    if ( (unsigned int)dword_14029ADF8 > 5 && tlgKeywordOn((__int64)&dword_14029ADF8, 0x200000000004LL) )
    {
      v44[0] = a6;
      v49 = (_OWORD *)v37;
      v47 = v25;
      v39 = v43 == 0LL;
      v48 = v43 == 0LL;
      v43 = (void *)(v27 + 108);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v39,
        (__int64)&unk_140274EF0,
        (__int64)&ActivityId,
        0LL,
        (const WCHAR **)&v43,
        (__int64)&v48,
        (__int64)&v46,
        (__int64)&v47,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)v44);
      v38 = dword_14029ADF8;
    }
    if ( (*(_DWORD *)(v27 + 140) & 1) != 0 && v38 > 5 && tlgKeywordOn((__int64)&dword_14029ADF8, 0x200000000004LL) )
    {
      v48 = *(_DWORD *)(v27 + 104);
      v47 = *(_DWORD *)(v27 + 100);
      v46 = *(_DWORD *)(v27 + 96);
      v55 = *(_DWORD *)(v27 + 92);
      LODWORD(v56) = *(_DWORD *)(v27 + 88);
      LODWORD(v57) = *(_DWORD *)(v27 + 84);
      LODWORD(v58) = *(_DWORD *)(v27 + 80);
      LODWORD(v50) = *(_DWORD *)(v27 + 72);
      LODWORD(v49) = *(_DWORD *)(v27 + 68);
      LODWORD(v43) = *(_DWORD *)(v27 + 64);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v40,
        (__int64)&unk_140274E63,
        (__int64)&ActivityId,
        v41,
        (__int64)&v43,
        (__int64)&v49,
        (__int64)&v50,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v46,
        (__int64)&v47,
        (__int64)&v48);
    }
    GreDeleteFastMutex((char *)v27);
  }
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v51);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return v25;
}
