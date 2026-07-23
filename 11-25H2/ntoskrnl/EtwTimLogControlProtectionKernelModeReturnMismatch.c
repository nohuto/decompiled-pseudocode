/*
 * XREFs of EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x140643A68
 * Callers:
 *     KiLogControlProtectionKernelModeReturnMismatch @ 0x1405C2944 (KiLogControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     RtlPcToFileHeader @ 0x14025DBF0 (RtlPcToFileHeader.c)
 *     RtlPcToFileName @ 0x14036CC30 (RtlPcToFileName.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall EtwTimLogControlProtectionKernelModeReturnMismatch(int a1, __int64 a2)
{
  int v2; // eax
  void *v3; // rsp
  unsigned __int16 Length; // di
  wchar_t *Buffer; // r13
  __int16 v6; // si
  int v7; // r15d
  __int16 v8; // ax
  int v9; // ecx
  void *v10; // rsp
  unsigned __int16 v11; // bx
  signed __int64 v12; // rax
  signed __int64 v13; // rax
  __int64 v14; // r8
  _DWORD v16[16]; // [rsp+20h] [rbp-40h] BYREF
  _WORD v17[2]; // [rsp+60h] [rbp+0h] BYREF
  __int16 v18; // [rsp+64h] [rbp+4h] BYREF
  PVOID BaseOfImage; // [rsp+68h] [rbp+8h] BYREF
  int v20; // [rsp+70h] [rbp+10h] BYREF
  int v21; // [rsp+74h] [rbp+14h] BYREF
  PVOID PcValue; // [rsp+78h] [rbp+18h] BYREF
  PVOID v23; // [rsp+80h] [rbp+20h] BYREF
  int v24; // [rsp+88h] [rbp+28h] BYREF
  int v25; // [rsp+8Ch] [rbp+2Ch] BYREF
  int v26; // [rsp+90h] [rbp+30h] BYREF
  int v27; // [rsp+94h] [rbp+34h] BYREF
  int v28; // [rsp+98h] [rbp+38h] BYREF
  signed __int64 v29; // [rsp+A0h] [rbp+40h] BYREF
  signed __int64 v30; // [rsp+A8h] [rbp+48h] BYREF
  UNICODE_STRING v31; // [rsp+B0h] [rbp+50h] BYREF
  UNICODE_STRING v32; // [rsp+C0h] [rbp+60h] BYREF
  PVOID v33; // [rsp+D0h] [rbp+70h] BYREF
  signed __int64 v34; // [rsp+D8h] [rbp+78h] BYREF
  PVOID v35; // [rsp+E0h] [rbp+80h] BYREF
  signed __int64 v36; // [rsp+E8h] [rbp+88h] BYREF
  __int64 v37; // [rsp+F0h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+A0h] BYREF
  wchar_t *v39; // [rsp+110h] [rbp+B0h]
  int v40; // [rsp+118h] [rbp+B8h]
  int v41; // [rsp+11Ch] [rbp+BCh]
  __int16 *v42; // [rsp+120h] [rbp+C0h]
  __int64 v43; // [rsp+128h] [rbp+C8h]
  wchar_t *v44; // [rsp+130h] [rbp+D0h]
  int v45; // [rsp+138h] [rbp+D8h]
  int v46; // [rsp+13Ch] [rbp+DCh]
  int *v47; // [rsp+140h] [rbp+E0h]
  __int64 v48; // [rsp+148h] [rbp+E8h]
  PVOID *p_PcValue; // [rsp+150h] [rbp+F0h]
  __int64 v50; // [rsp+158h] [rbp+F8h]
  signed __int64 *v51; // [rsp+160h] [rbp+100h]
  __int64 v52; // [rsp+168h] [rbp+108h]
  int *v53; // [rsp+170h] [rbp+110h]
  __int64 v54; // [rsp+178h] [rbp+118h]
  PVOID *v55; // [rsp+180h] [rbp+120h]
  __int64 v56; // [rsp+188h] [rbp+128h]
  signed __int64 *v57; // [rsp+190h] [rbp+130h]
  __int64 v58; // [rsp+198h] [rbp+138h]
  int *v59; // [rsp+1A0h] [rbp+140h]
  __int64 v60; // [rsp+1A8h] [rbp+148h]
  int *v61; // [rsp+1B0h] [rbp+150h]
  __int64 v62; // [rsp+1B8h] [rbp+158h]
  int *v63; // [rsp+1C0h] [rbp+160h]
  __int64 v64; // [rsp+1C8h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1D0h] [rbp+170h] BYREF
  int *v66; // [rsp+1F0h] [rbp+190h]
  __int64 v67; // [rsp+1F8h] [rbp+198h]
  _DWORD *v68; // [rsp+200h] [rbp+1A0h]
  __int64 v69; // [rsp+208h] [rbp+1A8h]
  wchar_t *v70; // [rsp+210h] [rbp+1B0h]
  _DWORD v71[2]; // [rsp+218h] [rbp+1B8h] BYREF
  _DWORD *v72; // [rsp+220h] [rbp+1C0h]
  __int64 v73; // [rsp+228h] [rbp+1C8h]
  __int64 v74; // [rsp+230h] [rbp+1D0h]
  _DWORD v75[2]; // [rsp+238h] [rbp+1D8h] BYREF
  PVOID *v76; // [rsp+240h] [rbp+1E0h]
  __int64 v77; // [rsp+248h] [rbp+1E8h]
  signed __int64 *v78; // [rsp+250h] [rbp+1F0h]
  __int64 v79; // [rsp+258h] [rbp+1F8h]
  PVOID *v80; // [rsp+260h] [rbp+200h]
  __int64 v81; // [rsp+268h] [rbp+208h]
  signed __int64 *v82; // [rsp+270h] [rbp+210h]
  __int64 v83; // [rsp+278h] [rbp+218h]
  int *v84; // [rsp+280h] [rbp+220h]
  __int64 v85; // [rsp+288h] [rbp+228h]
  PVOID *p_BaseOfImage; // [rsp+290h] [rbp+230h]
  __int64 v87; // [rsp+298h] [rbp+238h]
  __int64 *v88; // [rsp+2A0h] [rbp+240h]
  __int64 v89; // [rsp+2A8h] [rbp+248h]

  PcValue = *(PVOID *)a2;
  v23 = *(PVOID *)(a2 + 8);
  v21 = *(_DWORD *)(a2 + 16);
  v25 = *(_DWORD *)(a2 + 20);
  v26 = *(_DWORD *)(a2 + 24);
  v2 = *(_DWORD *)(a2 + 28);
  v20 = v2;
  BaseOfImage = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( a1 == 1 )
  {
    v24 = 0;
    v3 = alloca(64LL);
    memset_0(v17, 0, 0x40uLL);
    v31.MaximumLength = 64;
    v31.Buffer = v17;
    Length = 0;
    if ( (int)RtlPcToFileName((__int64)PcValue, &v31) >= 0 )
      Length = v31.Length;
    Buffer = v31.Buffer;
    v6 = 6;
    *(_QWORD *)&UserData.Size = 2LL;
    UserData.Ptr = (ULONGLONG)v17;
    v7 = 12;
    if ( Length )
    {
      v39 = v31.Buffer;
      v8 = Length >> 1;
      v9 = Length;
    }
    else
    {
      v39 = L"(null)";
      v8 = 6;
      v9 = 12;
    }
    v17[0] = v8;
    v40 = v9;
    v41 = 0;
    v10 = alloca(64LL);
    memset_0(v16, 0, sizeof(v16));
    v32.Buffer = (wchar_t *)v16;
    v32.MaximumLength = 64;
    v11 = 0;
    if ( (int)RtlPcToFileName((__int64)v23, &v32) >= 0 )
      v11 = v32.Length;
    v42 = &v18;
    v43 = 2LL;
    if ( v11 )
    {
      v44 = v32.Buffer;
      v6 = v11 >> 1;
      v7 = v11;
    }
    else
    {
      v44 = L"(null)";
    }
    v18 = v6;
    v45 = v7;
    v46 = 0;
    v47 = &v24;
    v48 = 4LL;
    RtlPcToFileHeader(PcValue, &BaseOfImage);
    if ( BaseOfImage )
      v12 = (_BYTE *)PcValue - (_BYTE *)BaseOfImage;
    else
      v12 = 0LL;
    v29 = v12;
    p_PcValue = &PcValue;
    v51 = &v29;
    v53 = &v25;
    v50 = 8LL;
    v52 = 8LL;
    v54 = 4LL;
    RtlPcToFileHeader(v23, &BaseOfImage);
    if ( BaseOfImage )
      v13 = (_BYTE *)v23 - (_BYTE *)BaseOfImage;
    else
      v13 = 0LL;
    v30 = v13;
    v56 = 8LL;
    v55 = &v23;
    v58 = 8LL;
    v57 = &v30;
    v59 = &v26;
    v61 = &v20;
    v63 = &v21;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    LOBYTE(v2) = EtwWriteEx(
                   EtwSecurityMitigationsRegHandle,
                   &MITIGATION_AUDIT_CONTROL_PROTECTION_KERNEL_MODE_RETURN_MISMATCH,
                   0LL,
                   0,
                   0LL,
                   0LL,
                   0xDu,
                   &UserData);
    if ( !Length )
    {
      Length = 0;
      Buffer = (wchar_t *)&cchOriginalDestLength;
    }
    if ( !v11 )
      v11 = 0;
    if ( (unsigned int)dword_140E09048 > 5 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E09048, 0x400000000000LL);
      if ( (_BYTE)v2 )
      {
        v74 = v14;
        v66 = &v27;
        v27 = 1;
        v68 = v71;
        v71[0] = Length;
        v67 = 4LL;
        v72 = v75;
        v75[0] = v11;
        v33 = PcValue;
        v76 = &v33;
        v34 = v29;
        v78 = &v34;
        v35 = v23;
        v80 = &v35;
        v36 = v30;
        v82 = &v36;
        v28 = v20;
        v84 = &v28;
        LODWORD(BaseOfImage) = v21;
        p_BaseOfImage = &BaseOfImage;
        v88 = &v37;
        v69 = 2LL;
        v70 = Buffer;
        v71[1] = 0;
        v73 = 2LL;
        v75[1] = 0;
        v77 = 8LL;
        v79 = 8LL;
        v81 = 8LL;
        v83 = 8LL;
        v85 = 4LL;
        v87 = 4LL;
        v37 = 0x1000000LL;
        v89 = 8LL;
        LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E09048,
                       (unsigned __int8 *)byte_1400520BB,
                       0LL,
                       0LL,
                       0xEu,
                       &v65);
      }
    }
  }
  return v2;
}
