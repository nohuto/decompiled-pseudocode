/*
 * XREFs of ?Compare@FxTransactionedList@@MEAAEPEAUFxTransactionedEntry@@PEAX@Z @ 0x140084410
 * Callers:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x14003246C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxTransactionedList::Compare(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry,
        void *Data)
{
  return 1;
}
