/*
 * XREFs of ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1402A4D94
 * Callers:
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1402A4B50 (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     _GetPointerDeviceType @ 0x14018F428 (_GetPointerDeviceType.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1402A4784 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1402A4AA0 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1402A4C80 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::_StoreLastUpDataAndPost(Edgy *this, struct tagEDGY_DATA *a2, void *const a3)
{
  Edgy *v4; // rdi
  unsigned int v5; // r15d
  unsigned int i; // esi
  __int64 UserSessionState; // rax
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v9; // rbx
  int IsLegacyDevice; // r14d
  int PointerDeviceType; // eax
  __int64 v12; // rax
  __int64 v13; // [rsp+40h] [rbp-38h]
  _BYTE v14[24]; // [rsp+48h] [rbp-30h] BYREF

  v4 = this;
  if ( *((_DWORD *)this + 4) != 2 )
  {
    v5 = *((_DWORD *)a2 + 12);
    for ( i = 0; i < v5; ++i )
    {
      UserSessionState = W32GetUserSessionState(this, a2);
      PointerInfo = CTouchProcessor::GetPointerInfo(*(CTouchProcessor **)(UserSessionState + 3264), a2, i);
      v9 = PointerInfo;
      if ( PointerInfo )
      {
        if ( (*((_DWORD *)PointerInfo + 3) & 0x40000) != 0 )
        {
          IsLegacyDevice = Edgy::_IsLegacyDevice(*((Edgy **)PointerInfo + 2), a2);
          if ( !IsLegacyDevice || *(_DWORD *)v9 == 3 )
          {
            PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v9 + 2), (__int64)a2);
            v12 = Edgy::_HitTestEdgyRegion(
                    (__int64)v14,
                    (unsigned int *)v4,
                    *((_QWORD *)v9 + 2),
                    *((_QWORD *)v9 + 5),
                    PointerDeviceType,
                    IsLegacyDevice);
            this = *(Edgy **)v12;
            v13 = *(_QWORD *)(v12 + 16);
            if ( *(_QWORD *)v12 )
            {
              *((_QWORD *)v4 + 30) = *((_QWORD *)v9 + 2);
              *((_DWORD *)v4 + 62) = *((_DWORD *)v9 + 16);
              *((_QWORD *)v4 + 32) = *((_QWORD *)v9 + 5);
              if ( (_DWORD)v13 == 1 )
                Edgy::_PostEdgyInertia(*((_QWORD *)this + 1), 1LL, *((_DWORD *)v4 + 63));
              return;
            }
          }
        }
      }
    }
  }
}
