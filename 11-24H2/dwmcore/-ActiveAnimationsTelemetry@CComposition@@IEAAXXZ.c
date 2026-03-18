/*
 * XREFs of ?ActiveAnimationsTelemetry@CComposition@@IEAAXXZ @ 0x18003F8C0
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CComposition::ActiveAnimationsTelemetry(CComposition *this, __int64 a2, __int64 a3)
{
  unsigned int i; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp-98h] BYREF
  int v8; // [rsp+38h] [rbp-90h] BYREF
  __int64 v9; // [rsp+40h] [rbp-88h] BYREF
  __int64 v10; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v11[16]; // [rsp+50h] [rbp-78h] BYREF
  int *v12; // [rsp+60h] [rbp-68h]
  __int64 v13; // [rsp+68h] [rbp-60h]
  int *v14; // [rsp+70h] [rbp-58h]
  __int64 v15; // [rsp+78h] [rbp-50h]
  __int64 *v16; // [rsp+80h] [rbp-48h]
  __int64 v17; // [rsp+88h] [rbp-40h]
  __int64 *v18; // [rsp+90h] [rbp-38h]
  __int64 v19; // [rsp+98h] [rbp-30h]

  if ( *((_BYTE *)this + 6465) )
  {
    for ( i = 0; i < *((_DWORD *)this + 216); ++i )
    {
      v5 = *(_DWORD **)(*((_QWORD *)this + 105) + 8LL * i);
      if ( v5 )
      {
        v6 = (unsigned int)v5[31];
        if ( (_DWORD)v6 || v5[29] )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) != 0 )
          {
            v10 = (unsigned int)v5[29];
            v8 = v5[7];
            v7 = v5[6];
            v12 = &v7;
            v14 = &v8;
            v16 = &v9;
            v18 = &v10;
            v9 = v6;
            v13 = 4LL;
            v15 = 4LL;
            v17 = 8LL;
            v19 = 8LL;
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &CHANNELANIMATIONS_ACTIVE,
              a3,
              5LL,
              v11);
          }
          dword_1803FA800 += v5[31];
          dword_1803FA804 += v5[29];
          v5[31] = 0;
          v5[29] = 0;
        }
      }
    }
    *((_BYTE *)this + 6465) = 0;
  }
}
