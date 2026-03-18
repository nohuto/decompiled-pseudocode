/*
 * XREFs of EtwTraceLayoutChangeStop @ 0x140087828
 * Callers:
 *     NtUserLayoutCompleted @ 0x1400874F0 (NtUserLayoutCompleted.c)
 * Callees:
 *     _GetClientRect @ 0x1400750A0 (_GetClientRect.c)
 *     McTemplateK0qqzz_EtwWriteTransfer @ 0x14028B5CC (McTemplateK0qqzz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall EtwTraceLayoutChangeStop(__int64 a1, int a2, __int64 a3)
{
  PEPROCESS *v6; // rcx
  PACCESS_TOKEN v7; // rbx
  int v8; // edx
  int v9; // r8d
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v12; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[256]; // [rsp+F0h] [rbp-10h] BYREF

  if ( (byte_140398F44 & 1) != 0 )
  {
    memset_0(v14, 0, sizeof(v14));
    memset_0(v13, 0, 0x84uLL);
    v6 = *(PEPROCESS **)(a1 + 464);
    v11 = 256LL;
    v10 = 132LL;
    v12 = 0LL;
    v7 = PsReferencePrimaryToken(*v6);
    if ( v7 )
    {
      RtlQueryPackageIdentity(v7, v14, &v11, v13, &v10, 0LL);
      GetClientRect(a3, &v12);
      if ( (byte_140398F44 & 1) != 0 )
        McTemplateK0qqzz_EtwWriteTransfer(
          v12.m128i_u16[4] | (v12.m128i_u16[6] << 16),
          v8,
          v9,
          a2,
          v12.m128i_i8[8],
          (__int64)v13,
          (__int64)v14);
      ObfDereferenceObject(v7);
    }
  }
}
