/*
 * XREFs of sub_14003A240 @ 0x14003A240
 * Callers:
 *     sub_14003C708 @ 0x14003C708 (sub_14003C708.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140046E08 @ 0x140046E08 (sub_140046E08.c)
 */

__int64 __fastcall sub_14003A240(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int *Pool2; // rax
  unsigned int *v4; // rbx
  unsigned int i; // eax
  unsigned int v6; // esi
  unsigned int j; // esi
  void *v8; // rcx
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  if ( (int)PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 24LL, &v10) >= 0 && v10 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 16 * v10 + 8, 1919119952LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v10;
      for ( i = 0; i < *v4; i = v6 )
      {
        v6 = i + 1;
        v2 = sub_140046E08(a1, i + 1, 25LL, &v4[4 * i + 2]);
        if ( v2 )
          goto LABEL_12;
      }
      v2 = ((__int64 (__fastcall *)(unsigned int *))qword_1400194A8)(v4);
      if ( !v2 )
      {
        qword_140019828 = (__int64)v4;
        return v2;
      }
LABEL_12:
      for ( j = 0; j < *v4; ++j )
      {
        v8 = *(void **)&v4[4 * j + 4];
        if ( v8 )
          ExFreePoolWithTag(v8, 0x72637250u);
      }
      ExFreePoolWithTag(v4, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
