/*
 * XREFs of DwmSyncMagnUpdateWindowSharedTextures @ 0x14010AC48
 * Callers:
 *     MagGetLensContextInformation @ 0x14022A370 (MagGetLensContextInformation.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x14010B4C0 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall DwmSyncMagnUpdateWindowSharedTextures(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        __int64 a6,
        int a7,
        int *a8)
{
  int v12; // edi
  __int128 v13; // xmm1
  int v14; // eax
  int v15; // eax
  int *v16; // rbx
  int v17; // ecx
  __int64 v19; // rdx
  HANDLE v20; // rcx
  PVOID v21; // [rsp+48h] [rbp-59h] BYREF
  __int64 v22; // [rsp+50h] [rbp-51h] BYREF
  int v23; // [rsp+58h] [rbp-49h] BYREF
  __int16 v24; // [rsp+5Ch] [rbp-45h]
  int v25; // [rsp+80h] [rbp-21h]
  int v26; // [rsp+84h] [rbp-1Dh]
  __int128 v27; // [rsp+88h] [rbp-19h]
  __int128 v28; // [rsp+98h] [rbp-9h]
  __int64 v29; // [rsp+A8h] [rbp+7h]
  __int64 v30; // [rsp+B0h] [rbp+Fh]
  __int64 v31; // [rsp+B8h] [rbp+17h]
  __int64 v32; // [rsp+C0h] [rbp+1Fh]
  HANDLE Handle; // [rsp+E8h] [rbp+47h] BYREF

  v12 = -1073741823;
  if ( Object )
  {
    v12 = DwmSyncLPCAllowed();
    if ( v12 >= 0 )
    {
      memset_0(&v23, 0, 0x70uLL);
      v23 = 7340104;
      v24 = 0x8000;
      v26 = a7;
      v32 = a6;
      v25 = 1073741935;
      v30 = a3;
      v31 = a4;
      v13 = a5[1];
      v27 = *a5;
      v29 = *((_QWORD *)a5 + 4);
      v28 = v13;
      EtwUpdateEvent(0LL);
      v22 = 112LL;
      v14 = LpcSendWaitReceivePort(Object, 0x20000LL, &v23, &v23, &v22, 0LL);
      v12 = v14;
      if ( v14 >= 0 )
      {
        if ( v14 == 192 || v14 == 258 || (unsigned __int8)v24 != 2 )
        {
          v12 = -1073741823;
        }
        else
        {
          v15 = v26;
          v16 = a8;
          *a8 = v26;
          if ( v15 < 0 )
          {
            v16[1] = 0;
            v16[2] = 0;
          }
          else
          {
            v17 = v27;
            v16[1] = v28;
            *(_QWORD *)(v16 + 3) = *(_QWORD *)((char *)&v28 + 4);
            v16[5] = HIDWORD(v28);
            v16[2] = v17;
            if ( v17 )
            {
              v19 = *(_QWORD *)((char *)&v27 + 4);
              Handle = 0LL;
              v16[9] = HIDWORD(v27);
              if ( (int)ObDuplicateObject(a2, v19, 0LL, &Handle, 4, 512, 1, 0) >= 0 )
              {
                v21 = 0LL;
                ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &v21, 0LL);
                v20 = Handle;
                *((_QWORD *)v16 + 5) = v21;
                ZwClose(v20);
              }
            }
            else
            {
              *((_QWORD *)v16 + 5) = 0LL;
              v16[9] = 0;
            }
            v12 = 0;
          }
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v12;
}
