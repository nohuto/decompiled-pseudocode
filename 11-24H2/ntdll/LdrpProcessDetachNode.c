/*
 * XREFs of LdrpProcessDetachNode @ 0x1800E3114
 * Callers:
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 * Callees:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18000F570 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180012C90 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180012F30 (LdrpCallTlsInitializers.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800703A0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpRecordUnloadEvent @ 0x1800E3290 (LdrpRecordUnloadEvent.c)
 */

void __fastcall LdrpProcessDetachNode(_QWORD **a1)
{
  _QWORD *i; // rdi
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 **v6; // rdx
  __int64 v7; // r15
  _QWORD v8[2]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v9; // [rsp+70h] [rbp-58h]
  __int128 v10; // [rsp+80h] [rbp-48h]
  __int128 v11; // [rsp+90h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp-28h]

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v3 = i - 20;
    *((_WORD *)i - 26) = 0;
    LdrpRecordUnloadEvent(i - 20);
    v4 = i - 16;
    v5 = *v4;
    if ( *v4 )
    {
      v6 = (__int64 **)v3[5];
      if ( *(__int64 **)(v5 + 8) != v4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      *v4 = 1LL;
    }
    v7 = v3[7];
    if ( v7 && (v3[13] & 0x80000) != 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrsnap.c",
        2769,
        (__int64)"LdrpProcessDetachNode",
        2,
        "Uninitializing DLL \"%wZ\" (Init routine: %p)\n",
        (_BYTE)i - 88);
      v8[0] = 72LL;
      v8[1] = 1LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      RtlActivateActivationContextUnsafeFast((__int64)v8, v3[17]);
      if ( *((_WORD *)v3 + 55) )
        LdrpCallTlsInitializers(0, (__int64)(i - 20));
      LdrpCallInitRoutine(v7, v3[6], 0, 0LL);
      RtlDeactivateActivationContextUnsafeFast((__int64)v8);
    }
  }
}
