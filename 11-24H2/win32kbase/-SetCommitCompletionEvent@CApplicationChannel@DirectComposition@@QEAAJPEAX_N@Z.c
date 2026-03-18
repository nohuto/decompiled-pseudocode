/*
 * XREFs of ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x14006E1B8
 * Callers:
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x14006DD50 (NtDCompositionSetChannelCommitCompletionEvent.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x14006E390 (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x14006E4EC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCommitCompletionEvent(
        DirectComposition::CApplicationChannel *this,
        void *a2,
        char a3)
{
  struct _ERESOURCE *v3; // rdi
  unsigned int v6; // edx
  NTSTATUS v7; // ebx
  struct _ERESOURCE *v8; // rax
  PVOID Buffer; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  Buffer = 0LL;
  if ( *((_QWORD *)this + 48) )
    return (unsigned int)-1073741790;
  if ( !a3 )
    goto LABEL_3;
  if ( (*((_BYTE *)this + 264) & 8) != 0 )
    return (unsigned int)-1073741790;
  v8 = (struct _ERESOURCE *)Win32AllocPoolImpl(0x40uLL, 0x68uLL, 0x73634344u);
  v3 = v8;
  if ( !v8 )
    return (unsigned int)-1073741801;
  memset(v8, 0, sizeof(struct _ERESOURCE));
LABEL_3:
  v7 = DirectComposition::CEvent::Create(a2, (int)a2, (struct DirectComposition::CEvent **)&Buffer);
  if ( v7 >= 0 )
  {
    if ( !v3 || (v7 = ExInitializeResourceLite(v3), v7 >= 0) )
    {
      *((_QWORD *)this + 48) = Buffer;
      *((_QWORD *)this + 49) = v3;
      return (unsigned int)v7;
    }
  }
  else if ( !v3 )
  {
    goto LABEL_6;
  }
  GreDeleteFastMutex((char *)v3);
LABEL_6:
  if ( Buffer )
    DirectComposition::CEvent::`scalar deleting destructor'(Buffer, v6);
  return (unsigned int)v7;
}
