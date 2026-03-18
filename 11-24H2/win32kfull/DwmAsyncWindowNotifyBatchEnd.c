/*
 * XREFs of DwmAsyncWindowNotifyBatchEnd @ 0x140324288
 * Callers:
 *     ?DecrementCounter@CDwmWindowNotifyBatchProp@@QEAAXXZ @ 0x1402D1ACC (-DecrementCounter@CDwmWindowNotifyBatchProp@@QEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall DwmAsyncWindowNotifyBatchEnd(PVOID Object, __int64 a2, int a3, int a4)
{
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+24h] [rbp-44h]
  int v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+4Ch] [rbp-1Ch]
  int v14; // [rsp+54h] [rbp-14h]
  int v15; // [rsp+58h] [rbp-10h]
  int v16; // [rsp+5Ch] [rbp-Ch]

  v8 = -1073741823;
  if ( Object )
  {
    memset_0(&v10, 0, 0x40uLL);
    v14 = 0;
    v10 = 4194328;
    v11 = 0x8000;
    v12 = 1073741917;
    v13 = a2;
    v15 = a3;
    v16 = a4;
    v8 = LpcRequestPort(Object, &v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
