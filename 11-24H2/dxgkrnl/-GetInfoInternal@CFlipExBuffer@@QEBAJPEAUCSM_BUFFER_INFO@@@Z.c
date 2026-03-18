/*
 * XREFs of ?GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x140021AE0
 * Callers:
 *     ?GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x140021960 (-GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1400610A4 (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     wcsrchr_0 @ 0x140064F0F (wcsrchr_0.c)
 */

__int64 __fastcall CFlipExBuffer::GetInfoInternal(CFlipExBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  unsigned int v4; // eax
  void *v5; // rax
  PROCESSINFOCLASS v6; // edi
  NTSTATUS v7; // eax
  unsigned __int64 v8; // rdx
  const wchar_t **Pool2; // rax
  const wchar_t **v10; // rbx
  wchar_t *v11; // rax
  wchar_t *v12; // rcx
  _WORD *v13; // rdx
  __int64 v14; // r8
  signed __int64 v15; // rcx
  __int16 v16; // ax
  _WORD *v17; // rax
  _CLIENT_ID ClientId; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ProcessInformationLength; // [rsp+A0h] [rbp+30h] BYREF
  void *ProcessHandle; // [rsp+A8h] [rbp+38h] BYREF

  *(_DWORD *)a2 = 2;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 4);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 5);
  *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6);
  *((_OWORD *)a2 + 5) = *((_OWORD *)this + 7);
  *((_OWORD *)a2 + 6) = *((_OWORD *)this + 8);
  *((_OWORD *)a2 + 7) = *((_OWORD *)this + 9);
  *((_OWORD *)a2 + 8) = *((_OWORD *)this + 10);
  *((_OWORD *)a2 + 9) = *((_OWORD *)this + 11);
  *((_QWORD *)a2 + 145) = *((_QWORD *)this + 42);
  *((_QWORD *)a2 + 146) = 0LL;
  *((_QWORD *)a2 + 147) = 0LL;
  *((_DWORD *)a2 + 40) = 0;
  *((_DWORD *)a2 + 41) = *((_DWORD *)this + 72);
  v4 = *((_DWORD *)this + 72);
  if ( v4 )
  {
    if ( v4 <= 1 )
      goto LABEL_22;
    v5 = (void *)*((unsigned int *)this + 162);
    if ( !(_DWORD)v5 )
      goto LABEL_22;
    ProcessHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueProcess = v5;
    ClientId.UniqueThread = 0LL;
    if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) < 0 )
      goto LABEL_22;
    v6 = ProcessImageFileNameWin32;
    ProcessInformationLength = 0;
    v7 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0LL, 0, &ProcessInformationLength);
    if ( v7 < 0 )
    {
      if ( v7 == -1073741820 )
        goto LABEL_7;
      v6 = ProcessImageFileName;
      v7 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &ProcessInformationLength);
    }
    if ( v7 != -1073741820 )
    {
LABEL_21:
      ZwClose(ProcessHandle);
LABEL_22:
      *((_DWORD *)a2 + 40) = *(_DWORD *)(*((_QWORD *)this + 34) + 16LL);
      return 0LL;
    }
LABEL_7:
    if ( ProcessInformationLength > 0x10 )
    {
      v8 = ProcessInformationLength + 2LL;
      if ( v8 <= 0x7FFFFFFF )
      {
        Pool2 = (const wchar_t **)ExAllocatePool2(256LL, v8, 1649234755LL);
        v10 = Pool2;
        if ( Pool2 )
        {
          if ( ZwQueryInformationProcess(ProcessHandle, v6, Pool2, ProcessInformationLength, 0LL) >= 0 )
          {
            v11 = wcsrchr_0(v10[1], 0x5Cu);
            if ( v11 )
              v12 = v11 + 1;
            else
              v12 = (wchar_t *)v10[1];
            v13 = (_WORD *)((char *)a2 + 1184);
            v14 = 64LL;
            v15 = (char *)v12 - ((char *)a2 + 1184);
            do
            {
              if ( v14 == -2147483582 )
                break;
              v16 = *(_WORD *)((char *)v13 + v15);
              if ( !v16 )
                break;
              *v13++ = v16;
              --v14;
            }
            while ( v14 );
            v17 = v13 - 1;
            if ( v14 )
              v17 = v13;
            *v17 = 0;
          }
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
        }
      }
    }
    goto LABEL_21;
  }
  return 0LL;
}
