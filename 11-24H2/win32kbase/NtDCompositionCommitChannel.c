/*
 * XREFs of NtDCompositionCommitChannel @ 0x1400A5430
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x14006DF90 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x140074BF0 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(
        __int64 a1,
        ULONG64 a2,
        ULONG64 a3,
        char a4,
        void *a5,
        void *Src,
        void *a7,
        unsigned int a8)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  int v14; // r13d
  PVOID *p_Buffer; // rcx
  __int64 v16; // r15
  int v17; // edi
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  unsigned int v20; // eax
  const struct DirectComposition::SynchronizationObject *v21; // rbx
  NTSTATUS v22; // edi
  const struct DirectComposition::SynchronizationObject *v23; // rsi
  int v24; // eax
  bool v25; // sf
  _DWORD *v26; // rcx
  _BYTE *v27; // r8
  void *v28; // rbx
  bool v30; // [rsp+40h] [rbp-E8h] BYREF
  int v31; // [rsp+44h] [rbp-E4h]
  PVOID Buffer; // [rsp+48h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD *v34; // [rsp+58h] [rbp-D0h]
  __int64 v35; // [rsp+60h] [rbp-C8h]
  struct DirectComposition::CApplicationChannel *v36; // [rsp+68h] [rbp-C0h] BYREF
  PVOID v37; // [rsp+70h] [rbp-B8h]
  unsigned int v38; // [rsp+78h] [rbp-B0h]
  void *v39; // [rsp+80h] [rbp-A8h]
  void *v40; // [rsp+88h] [rbp-A0h]
  __int128 v41; // [rsp+90h] [rbp-98h]
  size_t Size; // [rsp+A0h] [rbp-88h]
  HANDLE Handle; // [rsp+B0h] [rbp-78h]
  __int128 v44; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v45; // [rsp+D0h] [rbp-58h] BYREF
  size_t v46; // [rsp+E0h] [rbp-48h]

  v38 = a1;
  Handle = a5;
  v39 = Src;
  v40 = a7;
  v36 = 0LL;
  v31 = 0;
  v30 = 0;
  Buffer = 0LL;
  v37 = 0LL;
  if ( !a3 )
  {
LABEL_53:
    v17 = -1073741811;
    goto LABEL_54;
  }
  if ( Src || a7 || a8 )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(a1) + 70808);
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
    v14 = -1073741811;
    if ( CurrentProcess == v8 )
      v14 = 0;
    v34 = 0LL;
    p_Buffer = &Buffer;
    Object = &Buffer;
    v16 = 0LL;
    v35 = 0LL;
    v17 = v14;
    if ( CurrentProcess == v8 && Src )
    {
      v44 = 0LL;
      RtlCopyFromUser(&v44, Src, 0x10uLL);
      v41 = v44;
      v16 = v44;
      v35 = v44;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v17 < 0 )
          goto LABEL_54;
        if ( (void *)v16 == Src )
        {
          if ( v40 && a8 )
          {
            if ( 4 * (unsigned __int64)a8 < a8 )
              goto LABEL_53;
            v37 = (PVOID)Win32AllocPoolWithQuotaImpl((__int64)p_Buffer, 4LL * a8, 0x66624344u);
            if ( !v37 )
            {
              v17 = -1073741801;
              goto LABEL_54;
            }
            RtlCopyFromUser(v37, v40, 4LL * a8);
          }
          goto LABEL_26;
        }
        v41 = 0LL;
        Size = 0LL;
        v45 = 0LL;
        v46 = 0LL;
        RtlCopyFromUser(&v45, (void *)v16, 0x18uLL);
        v41 = v45;
        Size = v46;
        p_Buffer = (PVOID *)v46;
        if ( (v46 & 0x300000000LL) != 0 || HIDWORD(v46) < 8 )
          v17 = -1073741811;
        if ( v17 >= 0 )
          break;
LABEL_19:
        v16 = v41;
        v35 = v41;
      }
      v18 = (_QWORD *)Win32AllocPoolWithQuotaImpl(v46, HIDWORD(Size) + 24, 0x66624344u);
      v19 = v18;
      v34 = v18;
      if ( v18 )
      {
        *(_QWORD *)Object = v18;
        Object = v18;
        *v18 = 0LL;
        v18[1] = 0LL;
        *((_DWORD *)v18 + 4) = 0;
        v20 = HIDWORD(Size);
        *((_DWORD *)v19 + 5) = HIDWORD(Size);
        RtlCopyFromUser(v19 + 3, (void *)(v16 + 24), v20);
        goto LABEL_19;
      }
      v17 = -1073741801;
      v16 = v41;
      v35 = v41;
    }
  }
LABEL_26:
  v17 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(v38, &v36);
  if ( v17 >= 0 )
  {
    v21 = 0LL;
    if ( !Handle )
    {
LABEL_41:
      v17 = DirectComposition::CApplicationChannel::Commit(
              v36,
              &v30,
              a4 & 1,
              (a4 & 2) != 0,
              v21,
              (struct CMilProtocolBlock *)Buffer,
              (unsigned int *)v37,
              a8);
      if ( v17 >= 0 )
        v31 = *((_DWORD *)v36 + 103);
      if ( v21 )
        ObfDereferenceObject(v21);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v36)(v36);
      if ( v17 >= 0 )
      {
        v26 = (_DWORD *)a2;
        if ( a2 )
        {
          if ( a2 >= MmUserProbeAddress )
            v26 = (_DWORD *)MmUserProbeAddress;
          *v26 = v31;
        }
        v27 = (_BYTE *)a3;
        if ( a3 >= MmUserProbeAddress )
          v27 = (_BYTE *)MmUserProbeAddress;
        *v27 = v30;
      }
      goto LABEL_54;
    }
    Object = 0LL;
    v22 = ObReferenceObjectByHandle(Handle, 1u, ExCompositionObjectType, 1, &Object, 0LL);
    v23 = (const struct DirectComposition::SynchronizationObject *)Object;
    if ( v22 >= 0 )
    {
      if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v23 + 1) + 16LL))(*((_QWORD **)v23 + 1));
        if ( v24 != 3 )
          v22 = -1073741788;
        v21 = v23;
        if ( v24 != 3 )
          v21 = 0LL;
        v25 = v22 < 0;
        if ( v22 >= 0 )
          goto LABEL_39;
      }
      else
      {
        v22 = -1073741816;
      }
      ObfDereferenceObject(v23);
    }
    v25 = v22 < 0;
LABEL_39:
    if ( v25 )
      v21 = 0LL;
    goto LABEL_41;
  }
LABEL_54:
  if ( Buffer )
  {
    do
    {
      v28 = *(void **)Buffer;
      GreDeleteFastMutex((char *)Buffer);
      Buffer = v28;
    }
    while ( v28 );
  }
  if ( v37 )
    GreDeleteFastMutex((char *)v37);
  return (unsigned int)v17;
}
