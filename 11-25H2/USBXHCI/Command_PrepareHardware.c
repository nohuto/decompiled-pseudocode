/*
 * XREFs of Command_PrepareHardware @ 0x140074580
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079ED0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfA @ 0x140011198 (RtlStringCchPrintfA.c)
 *     XilCommand_AllocateResources @ 0x14003E6F4 (XilCommand_AllocateResources.c)
 *     XilCommand_FreeResources @ 0x14003EA64 (XilCommand_FreeResources.c)
 *     XilCommand_GetLinkTrbPointer @ 0x14003EBE0 (XilCommand_GetLinkTrbPointer.c)
 *     XilCommand_GetMaxTrbIndex @ 0x14003EC04 (XilCommand_GetMaxTrbIndex.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall Command_PrepareHardware(__int64 a1)
{
  int Resources; // edi
  __int64 v3; // rcx
  int v4; // edx
  __int64 v5; // rdi
  __int64 Pool2; // rax
  __int64 v8; // r9
  char v9; // [rsp+28h] [rbp-48h]
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-30h]
  char pszDest[16]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]

  v10 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  Resources = XilCommand_AllocateResources(a1);
  if ( Resources < 0 )
    goto LABEL_6;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 104) = a1 + 96;
  *(_QWORD *)(a1 + 96) = a1 + 96;
  *(_DWORD *)(a1 + 48) = XilCommand_GetMaxTrbIndex(a1);
  *(_QWORD *)(a1 + 56) = XilCommand_GetLinkTrbPointer(v3);
  v5 = a1 + 8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = v4;
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)v5 + 72LL),
      v4,
      7,
      13,
      (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
      v9);
  }
  Pool2 = ExAllocatePool2(64LL, 16LL * (unsigned int)(*(_DWORD *)(a1 + 48) + 1), 1229146200LL);
  *(_QWORD *)(a1 + 72) = Pool2;
  if ( !Pool2 )
  {
    Resources = -1073741670;
LABEL_6:
    XilCommand_FreeResources(a1);
    return (unsigned int)Resources;
  }
  v8 = *(_QWORD *)v5;
  *(_QWORD *)&v11 = 0LL;
  *(_QWORD *)&v10 = 56LL;
  pszDest[0] = 0;
  HIDWORD(v11) = 16;
  BYTE8(v11) = 0;
  v13 = 0x200000002LL;
  *((_QWORD *)&v10 + 1) = 0xC800000400LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d CMD", *(_DWORD *)(v8 + 176));
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v10, a1 + 16) < 0 )
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)v5 + 72LL);
  *(_DWORD *)(a1 + 32) = 1;
  return 0;
}
