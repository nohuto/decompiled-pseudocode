/*
 * XREFs of XilCoreCommand_AllocateResources @ 0x140056C08
 * Callers:
 *     XilCommand_AllocateResources @ 0x14003E6F4 (XilCommand_AllocateResources.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x140004238 (CommonBuffer_AcquireBuffer.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall XilCoreCommand_AllocateResources(__int64 a1)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(_QWORD *)(v3 + 88);
  v5 = CommonBuffer_AcquireBuffer(*(char **)(v3 + 120), 512LL, a1, 828665155LL);
  *(_QWORD *)(a1 + 16) = v5;
  result = 0LL;
  if ( v5 )
  {
    *(_DWORD *)(a1 + 32) = 31;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(v5 + 16);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v5 + 24) + 496LL;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v4 + 32) + 24LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)a1 + 16LL),
        v5,
        7,
        10,
        (__int64)&WPP_0ca11c42166c3ea98264a17e501f5a94_Traceguids);
    }
    return 3221225626LL;
  }
  return result;
}
