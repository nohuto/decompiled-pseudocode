/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x140AC3670
 * Callers:
 *     <none>
 * Callees:
 *     Feature_1806129466__private_IsEnabledDeviceUsageNoInline @ 0x1405970A0 (Feature_1806129466__private_IsEnabledDeviceUsageNoInline.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtCreateWaitCompletionPacket(__int64 *a1, int a2, int a3)
{
  char PreviousMode; // si
  __int64 v6; // rcx
  int inserted; // ecx
  _BYTE *v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[2]; // [rsp+60h] [rbp-18h] BYREF

  v11 = 0LL;
  Object[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IopWaitCompletionPacketObjectType,
               a3,
               PreviousMode,
               v10,
               112,
               0,
               0,
               Object,
               0LL);
  if ( inserted >= 0 )
  {
    v8 = Object[0];
    *((_QWORD *)Object[0] + 12) = 0LL;
    v8[104] = 0;
    if ( (unsigned int)Feature_1806129466__private_IsEnabledDeviceUsageNoInline() )
      v8[105] = 0;
    *((_QWORD *)v8 + 11) = 0LL;
    inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v8, 0LL, a2, 0, 0, 0LL, (__int64)&v11);
    if ( inserted >= 0 )
      *a1 = v11;
  }
  return (unsigned int)inserted;
}
