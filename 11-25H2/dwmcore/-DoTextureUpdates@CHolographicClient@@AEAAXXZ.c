/*
 * XREFs of ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1802DD890
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x1802DDB60 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x180293E9C (McTemplateU0xxxq_EventWriteTransfer.c)
 *     McTemplateU0xxxx_EventWriteTransfer @ 0x1802D9F90 (McTemplateU0xxxx_EventWriteTransfer.c)
 *     ?RemoveAt@?$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z @ 0x1802DEE00 (-RemoveAt@-$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0f_EventWriteTransfer @ 0x1802DEF80 (McTemplateU0f_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CHolographicClient::DoTextureUpdates(CHolographicClient *this)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  unsigned int **v4; // rsi
  DWORD v5; // eax
  __int64 v6; // rcx
  __int64 i; // rdi
  __int64 v8; // [rsp+28h] [rbp-10h]
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 62);
  v3 = ++qword_18040AC28;
  if ( v2 )
  {
    v4 = (unsigned int **)((char *)this + 224);
    while ( 1 )
    {
      v5 = WaitForSingleObject(*((HANDLE *)*v4 + 1), 0);
      if ( !v5 )
        break;
      if ( v5 == -1 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        {
          LODWORD(v8) = -1;
          McTemplateU0xxxq_EventWriteTransfer(
            v6,
            &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATEWAITFAILED,
            qword_18040AC28,
            qword_18040AC30,
            v2,
            v8);
        }
        DynArray<CHolographicClient::TextureUpdate,0>::RemoveAt(v4);
        v2 = *((_DWORD *)this + 62);
        if ( v2 )
          continue;
      }
      goto LABEL_12;
    }
    ++qword_18040AC30;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 3) + 56LL))(
        *((_QWORD *)this + 3),
        **v4,
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 192LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)*v4 + 2));
    DynArray<CHolographicClient::TextureUpdate,0>::RemoveAt(v4);
LABEL_12:
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0f_EventWriteTransfer();
    v3 = qword_18040AC28;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0xxxx_EventWriteTransfer(v3 - qword_18040AC30, &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATECOUNT);
}
