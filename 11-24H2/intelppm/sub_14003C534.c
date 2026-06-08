/*
 * XREFs of sub_14003C534 @ 0x14003C534
 * Callers:
 *     sub_14003C174 @ 0x14003C174 (sub_14003C174.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14003C534(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 Pool2; // rax
  void *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int16 v8; // r9
  unsigned int v9; // r8d
  _WORD *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int128 v13; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 1120);
  v13 = 0LL;
  v12 = 0LL;
  v3 = PoFxProcessorNotification(v2, 48LL, &v12);
  if ( !v3 )
  {
    Pool2 = ExAllocatePool2(64LL, 2 * (unsigned int)(unsigned __int16)v12 + 2, 1919119952LL);
    v5 = (void *)Pool2;
    if ( !Pool2 )
      return;
    v6 = *(_QWORD *)(a1 + 1120);
    *((_QWORD *)&v12 + 1) = Pool2;
    v7 = PoFxProcessorNotification(v6, 48LL, &v12);
    if ( v7 )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      {
LABEL_18:
        ExFreePoolWithTag(v5, 0x72637250u);
        return;
      }
      v8 = 11;
      v9 = 2;
    }
    else
    {
      v10 = v5;
      v11 = 0x7FFFLL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v11;
      }
      while ( v11 );
      if ( v11 )
      {
        *((_QWORD *)&v13 + 1) = v5;
        LOWORD(v13) = 2 * (0x7FFF - v11);
        WORD1(v13) = v13 + 2;
      }
      if ( (v11 == 0 ? 0xC000000D : 0) != 0 )
        goto LABEL_18;
      v7 = ((__int64 (__fastcall *)(__int128 *))qword_140019578)(&v13);
      if ( v7 >= 0 || off_140018058 == (_UNKNOWN *)&off_140018058 )
        goto LABEL_18;
      v8 = 12;
      v9 = 3;
    }
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, v9, v8, (__int64)&unk_140014CC8, v7);
    goto LABEL_18;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 4u, 2u, 0xAu, (__int64)&unk_140014CC8, v3);
}
