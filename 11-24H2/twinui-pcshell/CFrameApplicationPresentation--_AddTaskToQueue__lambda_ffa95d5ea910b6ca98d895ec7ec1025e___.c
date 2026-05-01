/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___ @ 0x1803094E0
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180035550 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6df05c95eefd3a852cd1630e41907728___ @ 0x18030897C (Windows--Internal--ComTaskPool--QueueTask__lambda_6df05c95eefd3a852cd1630e41907728___.c)
 *     _lambda_6df05c95eefd3a852cd1630e41907728_::_lambda_6df05c95eefd3a852cd1630e41907728_ @ 0x1803095D0 (_lambda_6df05c95eefd3a852cd1630e41907728_--_lambda_6df05c95eefd3a852cd1630e41907728_.c)
 *     _lambda_6df05c95eefd3a852cd1630e41907728_::__lambda_6df05c95eefd3a852cd1630e41907728_ @ 0x18030986C (_lambda_6df05c95eefd3a852cd1630e41907728_--__lambda_6df05c95eefd3a852cd1630e41907728_.c)
 *     _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::__lambda_ffa95d5ea910b6ca98d895ec7ec1025e_ @ 0x1803098BC (_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_--__lambda_ffa95d5ea910b6ca98d895ec7ec1025e_.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___(
        unsigned int *a1,
        __int64 a2)
{
  int v4; // edi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9[2]; // [rsp+20h] [rbp-198h] BYREF
  _BYTE v10[368]; // [rsp+30h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v9[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v5 = (_QWORD *)lambda_6df05c95eefd3a852cd1630e41907728_::_lambda_6df05c95eefd3a852cd1630e41907728_(v10, v9, a1, a2);
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_6df05c95eefd3a852cd1630e41907728___(v7, v6, a1[12], v5);
    lambda_6df05c95eefd3a852cd1630e41907728_::__lambda_6df05c95eefd3a852cd1630e41907728_(v10);
    if ( v4 >= 0 )
      ++a1[52];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  }
  lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::__lambda_ffa95d5ea910b6ca98d895ec7ec1025e_(a2);
  return (unsigned int)v4;
}
