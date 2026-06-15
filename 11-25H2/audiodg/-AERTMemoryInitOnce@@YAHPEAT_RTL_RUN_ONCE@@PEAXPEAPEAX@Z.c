/*
 * XREFs of ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x140032C00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDAC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x1400349CC (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 */

__int64 __fastcall AERTMemoryInitOnce(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp-28h]
  int pvData; // [rsp+80h] [rbp+18h] BYREF
  DWORD pcbData; // [rsp+88h] [rbp+20h] BYREF

  v4 = AERTCreateHeap(gInitialSize, gMinSize, gMaxSize);
  *Context = v4;
  v8 = v4;
  v9 = 0;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v6, v5, v7, 1, (char)v4, 0, 0, 0, v11, 0, 0);
  if ( !v8 )
    SetLastError(0xEu);
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"SkipRTHeap",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    g_bSkipRTHeap = pvData != 0;
  LOBYTE(v9) = v8 != 0LL;
  return v9;
}
