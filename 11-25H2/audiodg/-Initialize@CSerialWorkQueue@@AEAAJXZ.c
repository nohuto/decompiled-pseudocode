/*
 * XREFs of ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x1400087A0
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1400085B8 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSerialWorkQueue::Initialize(PTP_POOL *this)
{
  signed int v2; // ebx
  PTP_POOL Threadpool; // rax
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  struct _TP_POOL *v6; // rcx
  signed int LastError; // eax
  signed int v8; // eax
  signed int v9; // eax

  if ( *this )
    return 0;
  Threadpool = CreateThreadpool(0LL);
  *this = Threadpool;
  if ( Threadpool )
    goto LABEL_12;
  LastError = GetLastError();
  v2 = LastError;
  if ( LastError > 0 )
    v2 = (unsigned __int16)LastError | 0x80070000;
  if ( v2 >= 0 )
  {
LABEL_12:
    if ( SetThreadpoolThreadMinimum(*this, 1u) )
      goto LABEL_6;
    v8 = GetLastError();
    v2 = v8;
    if ( v8 > 0 )
      v2 = (unsigned __int16)v8 | 0x80070000;
    if ( v2 >= 0 )
    {
LABEL_6:
      ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
      this[15] = ThreadpoolCleanupGroup;
      if ( ThreadpoolCleanupGroup )
      {
        v2 = 0;
LABEL_9:
        SetThreadpoolThreadMaximum(*this, 1u);
        this[2] = *this;
        v6 = this[15];
        this[4] = 0LL;
        this[3] = v6;
        return (unsigned int)v2;
      }
      v9 = GetLastError();
      v2 = v9;
      if ( v9 > 0 )
        v2 = (unsigned __int16)v9 | 0x80070000;
      if ( v2 >= 0 )
        goto LABEL_9;
    }
  }
  return (unsigned int)v2;
}
