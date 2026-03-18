/*
 * XREFs of AlpcpMapLegacyPortView @ 0x14093C1C0
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x14088B56C (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpDeleteBlob @ 0x140893140 (AlpcpDeleteBlob.c)
 *     MmGetSectionInformation @ 0x14093C550 (MmGetSectionInformation.c)
 *     AlpcpCreateSectionView @ 0x14093DC88 (AlpcpCreateSectionView.c)
 *     AlpcpCreateSection @ 0x14093EF54 (AlpcpCreateSection.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  NTSTATUS SectionInformation; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  ULONG_PTR v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-8h]
  PVOID Object; // [rsp+98h] [rbp+48h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+50h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v24 = a3;
  v3 = *(void **)(a2 + 8);
  BugCheckParameter2 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !v3 )
    return 3221225480LL;
  Object = 0LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &Object,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation(Object, 0LL, &v21);
    if ( SectionInformation >= 0 )
    {
      if ( (DWORD2(v21) & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v7 = (unsigned int)(AlpcpViewGranularity - 1);
        v8 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v9 = v8 & (v7 + *(unsigned int *)(a2 + 16));
        v10 = v8 & (v7 + *(_QWORD *)(a2 + 24));
        if ( v10 + v9 < v9 )
        {
          SectionInformation = -1073741811;
        }
        else if ( v10 + v9 > v22 )
        {
          SectionInformation = -1073741670;
        }
        else
        {
          SectionInformation = AlpcpCreateSection(a1, 0LL, 0LL, v3, v22, &BugCheckParameter2);
          if ( SectionInformation >= 0 )
          {
            v11 = BugCheckParameter2;
            SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, (__int64)&v20);
            if ( SectionInformation < 0 )
            {
              if ( AlpcpDeleteBlob(v11) )
                AlpcpDereferenceBlobEx(v11, 1, v17, v18);
            }
            else
            {
              v12 = v20;
              *(_DWORD *)a2 = 48;
              *(_QWORD *)(a2 + 32) = *(_QWORD *)(v12 + 40);
              v13 = *(_QWORD *)(v12 + 48);
              *(_QWORD *)(a2 + 40) = 0LL;
              *(_QWORD *)(a2 + 24) = v13;
              *(_QWORD *)(v24 + 40) = v12;
              AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v12 + 16));
              ++*(_DWORD *)(v12 + 76);
              AlpcpUnlockBlob(*(_QWORD *)(v12 + 16), v14, v15, v16);
            }
            AlpcpDereferenceBlobEx(v11, 1, v17, v18);
          }
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)SectionInformation;
}
