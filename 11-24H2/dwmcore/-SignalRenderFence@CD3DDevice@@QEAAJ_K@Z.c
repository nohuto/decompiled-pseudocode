/*
 * XREFs of ?SignalRenderFence@CD3DDevice@@QEAAJ_K@Z @ 0x1801C92B4
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x1800F2360 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180250164 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::SignalRenderFence(CD3DDevice *this, __int64 a2)
{
  unsigned int v2; // esi
  int v5; // eax
  int v6; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // r9d
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 != *((_QWORD *)this + 184) )
  {
    *((_BYTE *)this + 1499) = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 28) + 152LL))(
           *((_QWORD *)this + 28),
           *((_QWORD *)this + 76),
           a2);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xE9u, 0LL);
    v2 = v6;
    if ( !*((_DWORD *)this + 278)
      && (v6 == -2005532292 || v6 == -2147024882 || v6 == -2005270523)
      && *((_DWORD *)this + 112) )
    {
      if ( v6 == -2005270523 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 69) + 312LL))(*((_QWORD *)this + 69));
        v9 = *((_DWORD *)this + 278);
        if ( v8 != -2005270480 )
        {
          if ( !v9 )
            *((_DWORD *)this + 278) = -2005270523;
LABEL_18:
          if ( *((_DWORD *)this + 278) )
          {
            v2 = -2003304307;
LABEL_10:
            *((_QWORD *)this + 184) = a2;
            *((_BYTE *)this + 1499) = 0;
            return v2;
          }
LABEL_9:
          v11 = 0;
          if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v6, 15, &v11) )
          {
            v10 = v11;
            if ( v11 == -2003304307 )
            {
              if ( v6 >= 0 )
                v6 = -2003304307;
              if ( !*((_DWORD *)this + 278) )
                *((_DWORD *)this + 278) = v6;
            }
            v2 = v10;
            if ( v10 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xB31u, 0LL);
          }
          goto LABEL_10;
        }
        if ( !v9 )
          *((_DWORD *)this + 278) = -2005270480;
      }
      CD2DContext::TempDisableHardwareProtection((CD3DDevice *)((char *)this + 16));
    }
    if ( v6 >= 0 )
      goto LABEL_9;
    goto LABEL_18;
  }
  return v2;
}
