/*
 * XREFs of SepInitializeAuthorizationCallbacks @ 0x140C3BEAC
 * Callers:
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 * Callees:
 *     ExRegisterHost @ 0x1407C0B6C (ExRegisterHost.c)
 */

__int64 __fastcall SepInitializeAuthorizationCallbacks(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-50h] BYREF
  __int64 v5; // [rsp+28h] [rbp-48h]
  int v6; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  int *v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]

  v8 = 65538LL;
  v5 = 0LL;
  v9 = &v4;
  v11 = 0LL;
  v12 = 0LL;
  v10 = 1LL;
  v4 = 1;
  if ( (int)ExRegisterHost(&SepAuthExtensionHost, a2, (unsigned __int16 *)&v8) < 0 )
    SepAuthExtensionHost = 0LL;
  v6 = 1;
  v9 = &v6;
  v7 = 0LL;
  LODWORD(v8) = 65539;
  LODWORD(v10) = 512;
  v11 = 0LL;
  v12 = 0LL;
  result = ExRegisterHost(&SepBCryptExtensionHost, v2, (unsigned __int16 *)&v8);
  if ( (int)result < 0 )
    SepBCryptExtensionHost = 0LL;
  return result;
}
