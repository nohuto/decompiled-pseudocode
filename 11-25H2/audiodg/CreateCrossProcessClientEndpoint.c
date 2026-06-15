/*
 * XREFs of CreateCrossProcessClientEndpoint @ 0x1400839F4
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProcessMemory@@PEAUSYSTEM_AUDIO_STREAM@@KII@Z @ 0x140067D3C (-RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProces.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateCrossProcessClientEndpoint(void **a1, __int128 *a2, int a3, __int64 a4, __int64 a5)
{
  void **i; // rax
  signed __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int128 *, GUID *, __int64); // rax
  int v9; // ebx
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (void **)&unk_1400A1A40; ; i += 4 )
  {
    if ( i == &HandleSendReceiveClient::`vftable' )
    {
      v9 = -2147418113;
      v10 = 119LL;
      goto LABEL_12;
    }
    v7 = (_BYTE *)*a1 - (_BYTE *)*i;
    if ( *a1 == *i )
      v7 = (_BYTE *)a1[1] - (_BYTE *)i[1];
    if ( !v7 && a3 == *((_DWORD *)i + 4) )
      break;
  }
  v8 = (__int64 (__fastcall *)(__int128 *, GUID *, __int64))i[3];
  v12 = *a2;
  v9 = v8(&v12, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, a5);
  if ( v9 >= 0 )
    return 0LL;
  v10 = 114LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\crossprocessendpointcreation.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
