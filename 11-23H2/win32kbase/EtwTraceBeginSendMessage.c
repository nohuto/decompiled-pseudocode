/*
 * XREFs of EtwTraceBeginSendMessage @ 0x1C009D760
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00DEF06 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppppqqqqq_EtwWriteTransfer @ 0x1C013BE40 (McTemplateK0cppppqqqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceBeginSendMessage(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rcx
  int v4; // r9d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 0x400000000400000LL) != 0
    && (unsigned __int8)(byte_1C0283068 - 1) > 2u
    && (qword_1C0283050 & 0x400000000400000LL) != 0
    && (qword_1C0283058 & 0x400000000400000LL) == qword_1C0283058 )
  {
    LOBYTE(v2) = 0;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
    {
      PsGetThreadId(**(PETHREAD **)(a1 + 40));
      v3 = *(__int64 **)(a1 + 112);
      if ( v3 )
        v2 = *v3;
      LOBYTE(v4) = GetCallbackCount();
      McTemplateK0cppppqqqqq_EtwWriteTransfer(v6, v5, v7, v4, a1, v2);
    }
  }
}
